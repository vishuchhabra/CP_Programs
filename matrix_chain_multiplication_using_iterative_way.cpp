#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int print_result(int arr[],int **dp ,int i,int j)
{
    if(i==j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int mini = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int coun = print_result(arr,dp,i,k)+print_result(arr,dp,k+1,j)+ (arr[i-1]*arr[k]*arr[j]);
        mini = min(mini,coun);
    }
    dp[i][j]= mini;
    return mini;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        int arr[n];
        int **dp =new int*[n];
        for(int i=0;i<n;i++)
            dp[i]= new int [n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            dp[i][j]=-1;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<print_result(arr,dp,1,n-1)<<endl;
    }
    return 0;
}
