#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void  largest_power(ll n)
{
    int coun =0;
    int mp=-1;
    while(n%2==0)
    {
       coun++;
       n/=2;
    }
    mp = coun;
    for(int i=3;i*i<=n;i+=2)
    {
        int c=0;
        while(n%i==0)
        {
            c++;
            n/=i;
        }
        mp = c;
    }
    if(n>2)
    {
      cout<<"NO"<<endl;
      return;
    }
    if(mp>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
       ll n;
       cin>>n;
       largest_power(n);
    }
    return 0;
}
