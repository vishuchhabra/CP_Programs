#include<bits/stdc++.h>
using namespace std;
int  print_result(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i=1;i<=sum;i++)
        dp[0][i]=0;
    for(int i=0;i<=n;i++)
        dp[i][0]=1;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=sum;j++)
        {
            dp[i][j] =dp[i-1][j];
            if(j>=arr[i-1])
            dp[i][j] = dp[i][j] || dp[i-1][j-arr[i-1]];

        }
    }
    return dp[n][sum];
}
int main()
{
    int arr[]={3, 6, 5, 12, 5, 2};
    int sum =9;
    cout<<print_result(arr,6,sum)<<endl;
    return 0;
}
