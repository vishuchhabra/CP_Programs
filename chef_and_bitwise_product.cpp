#include <iostream>
#include <bits/stdc++.h>
typedef long long int  ll;
using namespace std;

//for making the vector from the number
void virtual_main() {
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
ll  print_z(ll m,ll n, ll l ,ll r,vector<ll> temp)
{
    ll mini = temp[0];
    ll val = (m&mini ) * (n & mini);
    for(ll i=1;i<temp.size();i++)
    {
        ll co =  (m& temp[i] ) * (n & temp[i]);
        if(co>=val && temp[i]<mini )
        {

            val = co;
            mini = temp[i];
        }
    }
    return mini;
}
ll print_number(vector<ll> temp)
{
    ll  result =0;
    ll p =0;
    for (ll i = temp.size()-1;i>=0;i--)
    {
        result += (ll)temp[i]*(ll)pow(2,p);
        p++;
    }
    return result;
}

ll  return_result(ll mint , ll m ,ll  n)
{
  ll mini = mint;
  ll len  =  log2(max(m,n));
  for(ll i=0;i<len;i++)
  {
        if((!(m &(1<<i)) ) && (!(n&(1<<i))))
        {

           mini  =  mini&(~(1<<i));

        }
  }
  return mini;
}

void print_result(ll m, ll n, ll l,ll r)
{

  if ( !m || ! n)
  {
      cout<<"0"<<endl;

      return;
  }
  if(r >= 2 * max(m,n))
  {


     cout<< (m|n)<<endl;
     return ;
  }
  if( l== r)
  {

      cout<<l<<endl;
      return;
  }
  vector<ll> sol;
  vector<ll> bit;
  ll len =  log2(max(r,l));
  ll templ = len;
  ll perma  = -1;
  while(((1<<len)&r )==((1<<len)&l) && (len>=0))
  {
      ll first = (1<<len) & r ;
      if(first)
      bit.push_back((1));
      else
      bit.push_back(first);
      perma++;
      len --;
  }
  for(ll i = len ;i>=0 ; i--)
  {
     if(!((1<<i)&r))
     {
         perma++;
         bit.push_back(0);
         if(!i)
         sol.push_back(print_number(bit));
     }
     else
     {


         bit.push_back(0);
         for (ll f = perma+2;f<=templ;f++)
         {
           bit.push_back(1);
         }

         sol.push_back(print_number(bit));

         for(ll f =templ;f>=(perma+1);f--)
            bit.pop_back();

         bit.push_back(1);
         if(!i)
         sol.push_back(print_number(bit));

         perma++;
     }
  }



ll print_maxi =  print_z(m,n,l,r,sol);

cout<<return_result(print_maxi,m,n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    //virtual_main();
    ll cases;
    cin>>cases;
    while(cases--){
    ll m,n,l,r;
    cin>>m>>n>>l>>r;
    print_result(m,n,l,r);
    }
    return 0;
}
