#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min_result(int arr[],int n,int k)
{
   int cost=0;
   for(int i=0;i<n;i++)
   {
       cost+=arr[i];
       n-=k;
   }
   return cost;
}
int max_result(int arr[],int n,int k)
{
    int cost =0;
    int index =0;
    for(int i=n-1;i>=index;i--)
    {
        cost+=arr[i];
        index+=k;
    }
    return cost;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cout<<min_result(arr,n,k)<<" "<<max_result(arr,n,k)<<endl;
    }
    return 0;
}
