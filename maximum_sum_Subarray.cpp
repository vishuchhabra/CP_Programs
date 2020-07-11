#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_subArr(vector<int>arr,int n)
{
    int temp=0,sum=INT_MIN;
    for(auto p:arr)
    {

        temp = temp + p;
        if(sum < temp)
            sum = temp;
        if(temp < 0)
            temp = 0;

    }

    return sum;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n,val;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
          cin>>val;
          temp.push_back(val);
        }
        cout<<max_subArr(temp,n)<<endl;
    }
    return 0;
}
