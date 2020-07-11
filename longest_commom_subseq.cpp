#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int print_lcs(string first,string second,int **dp)
{
    if((!first.size())||(!second.size()))
    return 0;
    if(dp[first.size()][second.size()]!= -1)
        return dp[first.size()][second.size()];
    else
    {

        if(first[0]==second[0])
        {
            dp[first.size()][second.size()] = 1 + print_lcs(first.substr(1),second.substr(1),dp);
            return dp[first.size()][second.size()];
        }

        int o1 = print_lcs(first.substr(1),second,dp);
        int o2  = print_lcs(first,second.substr(1),dp);
        dp[first.size()][second.size()] = max(o1,o2);
        return dp[first.size()][second.size()];
    }
}
int main()
{
   int cases;
   cin>>cases;
   while(cases--){
        int m,n;
        cin>>m>>n;
    int **dp = new int*[m+1];
    for(int i=0;i<=m;i++)
        dp[i]= new int[n+1];
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
        dp[i][j]=-1;
    string first,second;
    cin>>first>>second;
    cout<<print_lcs(first,second,dp)<<endl;
    for(int i=0;i<=m;i++)
        delete [] dp[i];
    delete [] dp;
   }
    return 0;
}
