#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int cases;
      cin>>cases;
      while(cases--)
      {

          int val,n;
          cin>>val>>n;
          int coin[n];
          for(int i=0;i<n;i++)
          cin>>coin[i];
          int dp[val+1];
          for(int i=0;i<=val;i++)
            dp[i]=INT_MAX;
          dp[0]=0;
          for(int i=0;i<n;i++)
          {

              for(int j=coin[i];j<=val;j++)
              {

                  if(dp[j-coin[i]]!=INT_MAX)
                  {
                      dp[j]=min(dp[j],dp[j-coin[i]]+1);
                  }
              }
          }
          if(dp[val]!=INT_MAX)
          cout<<dp[val]<<endl;
          else
          cout<<"-1"<<endl;
      }
      return 0;
 }

