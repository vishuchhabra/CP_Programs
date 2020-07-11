#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lcs(string first, string second ,int m,int n)
{
 int dp[m+1][n+1];
 memset(dp,0,sizeof(int)*(m+1)*(n+1));
 for(int i=1;i<=m;i++)
 {
     for(int j=1;j<=n;j++)
     {
         if(first[m-i]==second[n-j])
           dp[i][j]= 1+ dp[i-1][j-1];
         else
         {
             dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
         }
     }
 }
 return dp[m][n];
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin>>cases;
    while(cases--)
    {
        string first,second;
        cin>>first>>second;
        int longest  = lcs(first,second,first.size(),second.size());
        cout<<first.size() + second.size() - longest<<endl;
    }
    return 0;
}
