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
        int n,r;
        cin>>n>>r;
        if(r>n)
        {
            cout<<"0"<<endl;
            continue;
        }
        int maxi = max(n-r,r);
        int mini = min(n-r,r);
        long long  res=1;
        for(int i=n;i>maxi;i--)
        {
          res *= i;

          if(res>=mod)
          res=res%mod;
        }
        long long resd=1;
        for(int i=mini;i>1;i--)
        {

            resd *=i;
            if(resd>=mod)
            resd =resd%mod;
        }
        cout<<res/resd<<endl;

    }
    return 0;
}
