//another dynamic programming program
#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
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
        dp[0]=1;dp[1]=2;
        for(int i=2;i<=n;i++)
            dp[i]= (dp[i-1]+dp[i-2])%mod;
        cout<<dp[n]<<endl;
    }
	return 0;
}
