#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
#define for(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main()
{

    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {

      int n,k;
      int o=0,ret =0;
      cin>>n>>k;
      for(n)
      {
        int val;
        cin>>val;
        o+=val;
        if(val>k)
            val=k;
        ret+=val;
      }
      cout<<o-ret<<endl;
    }
    return 0;

}
