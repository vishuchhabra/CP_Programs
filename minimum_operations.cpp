#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {

            if(i%2)
                dp[i]=dp[i-1]+1;
            else
            {

                dp[i]=min(dp[i/2],dp[i-1])+1;
            }
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}
