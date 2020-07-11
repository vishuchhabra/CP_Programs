#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base:: sync_with_stdio(false) ;  cin.tie(NULL)
#define ll  long long
#define vll vector<long long >
#define pb  push_back
using namespace std; //IMPORTANT TIP  THAT 1LL IS DEFINE AS 1LONG LONG
vll get_vector(ll x ,ll y, ll l, ll r)
{
    vll arr;
    bool ind =true;
    ll  total= 0;
    for(int i=62;i>=0;i--)
    {

      if(((l&(1LL<<i))== (r&(1LL<<i))) && ind )
      {
          total+= l & (1LL<<i);
          continue;
      }
      if(ind)
        ind=!ind;
      if((r & (1LL<<i)))
      {
          arr.pb(total +(r & (1LL<<i))-1);
      }
      total+= (r & (1LL<<i));

    }
    arr.pb(total);
    arr.pb(l);
    arr.pb(r);
    return arr;
}
void solve(ll x, ll y,  ll l, ll  r)
{
    vll arr= get_vector(x,y,l,r);
    sort(arr.begin(),arr.end());
    ll  val = arr[0];
    for(auto i: arr)
    {
        if(((x&i)*(y&i))>((x&val)*(y&val)))
            val= i;
    }
    for(int i=62;i>=0;i--)
    {
        ll  p = 1LL<<i;
        if((!(p&x)) && (!(p&y)) && (val-p>=l))
            val =val &(~p);
    }
    cout<<val<<endl;
}
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        ll x,y,l,r;
        cin>>x>>y>>l>>r;
        solve(x,y,l,r);
    }
    return 0;
}
