#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum_v(int **arr,int s1,int s2,int m,int n)
{
    int dp[m+1][n+1];
    int last = (arr[m][n]>0)?1:(abs(arr[m][n])+1);
    dp[m][n]=last;
    for(int i=m-1;i>=0;i--)
       dp[i][n]=max(dp[i+1][n]-arr[i][n],1);
    for(int i=n-1;i>=0;i--)
        dp[m][i]=max(dp[m][i+1]-arr[m][i],1);
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
           int mini = min(dp[i][j+1],dp[i+1][j]);
           dp[i][j]= max(1,mini-arr[i][j]);

        }
    }
    return dp[0][0];
}
int main()
{
    int m,n,cases;
    cin>>cases;
    while(cases--){
    cin>>m>>n;
    int **arr=new int*[m];
    for(int i=0;i<m;i++)
        arr[i]=new int[n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    cout<<minimum_v(arr,0,0,m-1,n-1)<<endl;
    }
    return 0;
}
