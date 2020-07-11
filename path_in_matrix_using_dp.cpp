#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_max_sum(int **arr,int m,int n)
{
   int dp[m][n+2];
   int g_max =INT_MIN;
   dp[m-1][0]=-1;
   dp[m-1][n+1]=-1;
   for(int i=1;i<=n;i++)
     dp[m-1][i]= arr[m-1][i-1];
   for(int i=m-2;i>=0;i--){
   for(int j=0;j<=n+1;j++)
   {
       if(j==0 || j==n+1)
        dp[i][j]=-1;
       else
       dp[i][j]= max(dp[i+1][j],max(dp[i+1][j-1],dp[i+1][j+1]))+arr[i][j-1];
   }}
   for(int i=1;i<=n;i++)
   if(g_max<dp[0][i])
   g_max = dp[0][i];
   return g_max;

}
int main()
{
    int cases;
    cin>>cases;
    while(cases--){
    int m,n;
    cin>>m>>n;
    int **arr;
    arr = new int*[n];
    for(int i=0;i<n;i++)
        arr[i]=new int [m];
//    for(int i=0;i<n;i++)
//        for(int j=0;j<n;j++)
//        cin>>arr[i][j];//it is for another one

    //for gold man problem we will take input in another fashion
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>arr[j][i];


   cout<<print_max_sum(arr,n,m)<<endl;
    }
    return 0;
}
