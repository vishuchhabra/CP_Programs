#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long count_triple(vector<long> arr,long r)
{
    unordered_map<long,int>left,right;
    for(auto i:arr)
        right[i]++;
    long ans=0;
    for(int i=0;i<arr.size();i++)
    {
        right[arr[i]]--;
        if(arr[i]%r==0)
        {
        long c1=0,c2=0;
        c1+=left[arr[i]/r];

        c2 += right[arr[i]*r];
        ans+= c1*c2;

        }
        left[arr[i]]++;
    }
    return ans;
}
int main()
{
    long siz,r,val;
    cin>>siz>>r;
    vector<long>arr;
    for(long i=0;i<siz;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    cout<<count_triple(arr,r)<<endl;
    return 0;
}
