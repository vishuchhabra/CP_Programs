#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sub_arr(vector<int> arr,int n,int sum)
{
    int c_sum = arr[0],start=0;
    for(int i=1;i<=n;i++)
    {
        while(c_sum>sum && start<i-1)
        {
            c_sum=c_sum - arr[start];
            start++;
        }
        if(c_sum==sum)
        {
            cout<<start<<" "<<i-1<<endl;
            return;
        }
        if(i<n)
        c_sum =c_sum + arr[i];

    }
    cout<<"-1"<<endl;

}
int main()
{
    int cases,n,sum,val;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>n>>sum;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
          cin>>val;
          arr.push_back(val);
        }
        sub_arr(arr,n,sum);
    }
    return 0;
}
