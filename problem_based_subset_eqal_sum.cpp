#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool  print_result(int arr[],int i,int n,int total)
{
    if(i>=n)
        return false;
    if(arr[i]>total)
        return false;
    if(arr[i]==total)
        return true;
    return (print_result(arr,i+1,n,total-arr[i])||print_result(arr,i+1,n,total));
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int total  = accumulate(arr,arr+n,0);
        if(!(total%2))
        {
            total/=2;
            if(print_result(arr,0,n,total))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
