//in this case we will use concept of segment sieve which is to important
#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
#define siz 100001
typedef long long ll;
using namespace std;
//simple sieve
vector<ll> seive()
{
  vector<bool>arr(siz,true);
  arr[0]=false;arr[1]=false;
  for(ll i=2;i*i<siz;i++)
  {
      if(arr[i])
      {
         for(ll j =i*i;j<siz;j+=i)
            arr[j]=false;
      }
  }
  vector<ll>temp;
    for(ll i=0;i<siz;i++)
        if(arr[i])
         temp.push_back(i);
  return temp;
}
//segment sieve
vector<ll> seg_sieve(ll l,ll r)
{
    vector<ll> prime = seive();
    vector<ll> arr(r-l+1,true);
    if(l==1)
        arr[0]=false;
    for(ll i=0;prime[i]*prime[i]<=r;i++)
    {

        ll cp = prime[i];
        ll base  =(l/cp )*cp;
        if(base<l)
            base +=cp;
        for(ll j = base;j<=r;j+=cp)
        {
            arr[j-l]=false;
        }
        if(base==cp)
            arr[base-l]=true;
    }
    vector<ll> res;
    for(ll i=0;i<=(r-l);i++)
        if(arr[i])
        res.push_back(i+l);
   return res;
}
ll multi(ll l ,ll r)
{
    vector<ll>arr = seg_sieve(l,r);
    ll m=1;
    for(auto i:arr)
    {

        m*=i;
        m=m%mod;
    }
    return m;

}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        ll l,r;
        cin>>l>>r;
        cout<<multi(l,r)<<endl;
    }
    return 0;
}

