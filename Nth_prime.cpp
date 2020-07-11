#include <iostream>
#include <bits/stdc++.h>
#define mod 10000003
using namespace std;
long long res[10000009];
int prime[10000009];
void  seive()
{
  for(int i=2;i<=10000000;i++)
  {
      if(!prime[i])
      {

          for(int j=i+i;j<=10000000;j+=i)
          {
              res[i] =res[i-1]+ i;
              if(!prime[j])
              prime[j]=i;
          }
      }
      else
        res[i] =res[i-1]+prime[i];
  }
}
int main()
{

int cases;
seive();
cin>>cases;
while(cases--)
{

    int n;
    cin>>n;
    cout<<res[n]<<endl;
}

return  0;
}
