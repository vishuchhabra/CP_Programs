//use array instead of vector in this code //important to note down
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_max_val(int v[],int vs,int w[],int ws,int wt,int **dp)
{
    if(wt==0)
        return 0;
    if(vs==0)
        return 0;
    if(dp[wt][vs]!=(-5))
        return dp[wt][vs];
    int first =-1;
    if(w[ws-1]<=wt)
        first  = print_max_val(v,vs-1,w,ws-1,wt-w[ws-1],dp)+v[vs-1];
    int second  = print_max_val(v,vs-1,w,ws-1,wt,dp);
    dp[wt][vs]= max(first,second);
    return max(first,second);
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--){
    int n,wt,val;
    cin>>n>>wt;
    int v[n],w[n];
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {

        cin>>w[i];
    }
    int **dp = new int*[wt+1];
    for(int i=0;i<=wt;i++)
        dp[i]= new int [n+1];
    for(int i=0;i<=wt;i++)
        for(int j=0;j<=n;j++)
        dp[i][j]= -5;
    cout<<print_max_val(v,n,w,n,wt,dp)<<endl;
    }
    return 0;
}
