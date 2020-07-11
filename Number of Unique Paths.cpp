#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int m,n;
        cin>>m>>n;
        int dp[m][n];
        for(int i=0;i<n;i++)
            dp[0][i]=1;
        for( int j=0;j<m;j++)
            dp[j][0]= 1;
        for(int i=1;i<m;i++)
        {

            for(int j=1;j<n;j++)
            {

                dp[i][j] = dp[i-1][j]+ dp[i][j-1];
            }
        }
        cout<<dp[m-1][n-1]<<endl;
    }
    return 0;
}
