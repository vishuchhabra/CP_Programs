#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_sbits(int n)
{
    int coun=0;
    while(n)
    {
        coun+=n & 1;
        n=n>>1;
    }
    return coun;
}
int main()
{
    int n= 4;
    int cost[4][4]={{3,2,7,4},{5,6,1,2},{8,3,1,5},{4,6,11,3}};
    int e_d = pow(2,4);
    vector<int> dp(e_d,INT_MAX);
    dp[0]=0;
    for (int i=0;i<e_d;i++)
    {
        int s_bits= count_sbits(i);
        for(int j=0;j<4;j++)
        {
            if(!(i & 1<<j))
            {


                dp[i|(1<<j)]= min(dp[i|(1<<j)], (dp[i]+cost[s_bits][j]));

            }
        }
    }
    cout<<dp[e_d-1];
    return 0;
}
