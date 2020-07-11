#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int no_ways(int n,int r,int **arr)
{
 if(r==0 || n==r)
 return 1;
 if (n<r)
    return 0;
 if(arr[n][r]>-1)
    return arr[n][r];
 int output  = no_ways(n-1,r,arr)+no_ways(n-1,r-1,arr);
 output =output%mod;
 arr[n][r]=output;

 return output;
 }
int main()
{
 int cases;
 cin>>cases;
 while(cases--)
 {
     int n,r;
     cin>>n>>r;
     int **arr ;
     arr= new int*[n+1];
     for(int i=0;i<=n;i++)
        arr[i]=new int [r+1];
     //assigning -1 to each cases
     for(int i=0;i<=n;i++)
        for(int j=0;j<=r;j++)
        arr[i][j]=-1;
     cout<<no_ways(n,r,arr)<<endl;

 }
    return 0;
}
