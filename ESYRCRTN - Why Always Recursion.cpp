#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        long long  dp[n+1];
        dp[0]=0;dp[1]=1;dp[2]=3;
        for(long long i=3;i<=n;i++)
        {

            dp[i]= dp[i-1]+dp[i-2];
        }
        long long sum =0;
        for(long long  i=1;i<=n;i++)
            sum+=dp[i];
        cout<<sum<<endl;
    }
    return 0;
}
