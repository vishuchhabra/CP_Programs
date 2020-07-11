#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;cin>>cases;
    while(cases--)
    {
      int n;
      cin>>n;
      if(n%2)
      {
        cout<<n<<endl;
        continue;
      }
      int res=0;
      while(n)
      {
          int c = n & 1;
          n=n>>1;
          res=res<<1;
          res=res | c;
      }
      cout<<res<<endl;


    }
    return 0;

}

