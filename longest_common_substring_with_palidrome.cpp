#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
void print(string str , int l ,int r)
{
    for(int i=l;i<=r;i++)
        cout<<str[i];
    cout<<endl;
}
void print_result(string str)
{
    int n = str.size();
    int dp[n][n];
    memset(dp,0,sizeof(dp));

    int start =0;
    int max_length= 1;
    //for the length one
    for(int i=0;i<n;i++)
       dp[i][i]=1;

    int flag  =1;
    //for the length 2
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            max_length =2;
            dp[i][i+1]= 1;
            if(flag !=2)
            {
                start = i;
                flag = 2;
            }
        }
    }
    //for the length more than 2
    for(int len = 3;len<=n;len++)
    {
        for(int i=0;i<n-len+1;i++)
        {
            //for the end position
            int j = i+len -1;

            //checking for the condition
            if(dp[i+1][j-1] && str[i]==str[j])
            {
                dp[i][j] =1;
                max_length =len;
                if(flag != len)
                {

                    start = i;
                    flag = len;
                }

            }
        }
    }

    print(str,start,start+max_length-1);
}
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
      string str;
      cin>>str;
      print_result(str);
    }
    return 0;
}
