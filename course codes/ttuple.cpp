#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) ; cin.tie(NULL)
#define ll  long long
using namespace std;
bool  condition0(ll p ,ll q ,ll r ,ll a ,ll b, ll c)
{
    if( p==a && q==b && r==c)
        return true;
    return false;
}

bool  condition1(ll p, ll q ,ll r ,ll a ,ll b , ll c)
{
    if(!a && !b && !c)
        return true;
    ll d1 = a-p;
    ll d2 = b-q;
    ll d3 = c-r;
    if(d1==d2 && d2 == d3)
        return true;
    if( !d1 && (d2==d3) )
        return true;
    if(!d2 && (d1==d3))
        return true;
    if(!d3 && (d1==d2))
        return true;
    if(!d1 && !d2 && d3)
        return true;
    if(!d2 && !d3 && d1)
        return true;
    if(!d1 && !d3 && d2)
        return true;
    if(p && q  && r)
    if(!(a%p) && !(b%q) && !(c%r)  && ((a/p) ==(b/q) &&(b/q)==(c/r)) )
       return true;
    if(q && r)
    if(!d1 && !(b%q) && !(c%r) &&((b/q)==(c/r)))
       return  true;
    if(p && r)
    if(!d2 && !(a%p) && !(c%r)&& ((a/p)==(c/r)))
       return true;
    if(p && q)
    if(!d3 && !(a%p) && !(b%q)&& ((a/p)==(b/q)))
       return true;
    if(r)
    if(!d1 && !d2 && (!(c%r)))
        return true;
    if(p)
    if(!d3 && !d2 && (!(a%p)))
        return true;
    if(q)
    if(!d1 && !d3 && (!(b%q)))
        return true;

    return false;

}

bool  condition2(ll p, ll q,ll r , ll a , ll b, ll c)
{
    ll d1 = a-p;
    ll d2 = b-q;
    ll d3 = c-r;
    if(d1==d2 && d3)
        return true;
    if(d1==d3 && d2)
        return true;
    if(d2==d3 && d1)
        return true;
    if(!d1 && d2!=d3)
        return true;
    if(!d2 && d1!=d3)
        return true;
    if(!d3 && d1!=d2)
        return true;
    if(q && r)
    if(!d1 && !(b%q) && !(c%r))
     return true;

    if(p && r)
    if(!d2 && !(a%p) && !(c%r))
     return true;

    if(p && q)
    if(!d3 && !(a%p) && !(b%q))
     return true;
    //for two  cases
    if(q && r && p)
    if(!(a%p) && !(b%q) && !(c%r) && ((a/p)==(b/q)))
     return true;

    if(p && r && q)
    if(!(a%p) && !(b%q) && !(c%r) && ((c/r)==(b/q)))
    return true;

    if(p && q && r)
    if(!(a%p) && !(b%q) && !(c%r) && ((a/p)==(c/r)))
     return true;

    if((d1==d2+d3) || (d2== d1+d3 )|| (d3==d1+d2))
     return true;

    // multiplication addition
     int t1= a,t2= b,t3=c;

    for(int i=1;i<=100;i++)
    {


        t1--;
        t2--;
        t3--;
        if(p && q && r)
        if(!(t1%p) && !(t2%q)&& !(t3%r))
        {

            if( (t1/p) ==(t2/q) && (t2/q)==(t3/r))
                return true;
        }

     }


    //multiplication addition

    t1=p;t2=q;t3=c;
    for(int i=1;i<=100;i++)
    {


        t1++;
        t2++;
        t3++;
        if(t1 && t2 && t3)
        if(!(a%t1) && !(b%t2)&& !(c%t3))
        {

            if( (a/t1) ==(b/t2) && (b/t2)==(c/t3))
                return true;
        }

     }

     if(p && q && r)
     {

         if(!(a%p) && !(b%q) && !(c%r))
         {

             ll h = a/p;
             ll k= b/q;
             ll l = c/r;
             if(h==k*l ||  k==h*l || l== k*h)
                return true;
         }
     }






    return false;

}
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        ll  p,q,r,a,b,c;
        cin>>p>>q>>r>>a>>b>>c;
        if(condition0(p,q,r,a,b,c))
            cout<<"0"<<endl;
        else if(condition1(p,q,r,a,b,c))
            cout<<"1"<<endl;
        else if(condition2(p,q,r,a,b,c))
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;

    }
    return 0;
}


