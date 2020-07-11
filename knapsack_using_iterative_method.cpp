#include<bits/stdc++.h>
using namespace std;
int print_mval(int v[],int w[],int n,int wt)
{
    int dp[n+1][wt+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int i=0;i<=wt;i++)
        dp[0][i]=0;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=wt;j++)
        {
            int first =-1;
            int second = dp[i-1][j];
            if(w[i-1]<=j)
                first = dp[i-1][j-w[i-1]]+v[i-1];
            dp[i][j]=max(first,second);
        }
    }
    return dp[n][wt];
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
       int n,wt;
       cin>>n>>wt;
       int v[n],w[n];
       for(int i=0;i<n;i++)
        cin>>v[i];
       for(int i=0;i<n;i++)
        cin>>w[i];
       cout<<print_mval(v,w,n,wt)<<endl;
    }
    return 0;
}
