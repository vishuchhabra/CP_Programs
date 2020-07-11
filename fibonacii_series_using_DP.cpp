#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long  long fibonaci_n(long long arr[],int n)
{
    if(n<=1)
        return n;

    if(arr[n]>0)
        return arr[n];
     arr[n] = (fibonaci_n(arr,n-1) + fibonaci_n(arr,n-2))%mod;
    return arr[n];
}
int main()
{

    int cases;
    cin>>cases;
    while(cases--)
    {
      int n;
      cin>>n;
      long long  arr[n+1]={0};
      cout<<(long long )(fibonaci_n(arr,n)%mod)<<endl;
    }
    return 0;
}

