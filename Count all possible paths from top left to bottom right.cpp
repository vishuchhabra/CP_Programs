#include <bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(false);cin.tie()
#define mod 1000000007
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int m,n;
        cin>>m>>n;
        int dp[m][n];
        for(int i=0;i<m;i++)
            dp[i][0] = 1;
        for(int j=0;j<n;j++)
            dp[0][j] =1;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = (dp[i-1][j]+ dp[i][j-1])%mod;
            }
        }
        cout<<dp[m-1][n-1]<<endl;
    }
    return 0;
}
