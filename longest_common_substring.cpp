#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base :: sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
string first,second;
int return_lcs(int m ,int  n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
        dp[i][0]=0;
    for(int i=0;i<=n;i++)
        dp[0][i]=0;
    int result =0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(first[i-1]==second[j-1])
           {
             dp[i][j] =1+ dp[i-1][j-1];
             result  =max (result,dp[i][j]);
           }
           else
           {
             dp[i][j]=0;
           }
        }
    }
    return result;
}
int main()
{
 fast;
 int cases;
 cin>>cases;
 while(cases--)
 {
    int m,n;
    cin>>m>>n;
    cin>>first>>second;
    cout<<return_lcs(m,n)<<endl;
 }
 return 0;
}
