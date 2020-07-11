#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int print_result(int n ,const int &a ,const int &b ,const int &c, vector<int>& dp)
{
   if(n<0)
    return -1;
   if(n==0)
    return 0;
   if(dp[n]!=-5)
    return dp[n];
   int val = max(print_result(n-a,a,b,c,dp),max(print_result(n-b,a,b,c,dp),print_result(n-c,a,b,c,dp)));
   dp[n] = val;
   if(val==-1)
    return val;
   dp[n]= val+1;
   return val+1;
}
//using dynamic programming solution
int result(int n,int a, int b , int c)
{
    int dp[n+1];
    memset(dp,-1, sizeof(dp));
    dp[0]=0;
    for(int i=0;i<=n;i++)
    {
        if(dp[i]==-1)
        continue;

        if(i+a<=n)
            dp[i+a]= max(dp[i+a],dp[i]+1);
        if(i+b<=n)
            dp[i+b]= max(dp[i+b],dp[i]+1);
        if(i+c<=n)
            dp[i+c]= max(dp[i+c],dp[i]+1);
    }
    return dp[n];
}
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        vector<int> dp(n+1,-5);
        cout<<result(n,x,y,z)<<endl;
    }
    return 0;
}
