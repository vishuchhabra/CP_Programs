//this method is good when we are going to safe the memory in our program
#include<bits/stdc++.h>
using namespace std;
int  print_result(int arr[],int n,int sum)
{
    int dp[2][sum+1];
    int flag =1;
    for(int i=0;i<=sum;i++)
        dp[0][i]=0;
    dp[0][0]=1;
    dp[1][0]=1;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=sum;j++)
        {
            dp[flag][j] =dp[flag^1][j];
            if(j>=arr[i-1])
            dp[flag][j] = dp[flag][j] || dp[flag^1][j-arr[i-1]];

        }
        flag = flag^1;
    }
    return dp[flag^1][sum];
}
int main()
{
    int arr[]={13,-43, 5, 4, 5, 2};
    int sum =9;
    cout<<print_result(arr,6,sum)<<endl;
    return 0;
}

