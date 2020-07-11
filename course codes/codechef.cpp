#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    long long cases;
    cin>>cases;
    while(cases--)
    {
        long long p,q,r,a,b,c;
        cin>>p>>q>>r>>a>>b>>c;
        long long  d1 = a-p;
        long long  d2 = b-q;
        long long  d3 = c-r;
        double m1 = 999999999999 ,m2 =999999999998,m3 = 999999999997;
        if(!p && !(a%p))
          m1 = a/p;
        if(q && !(b%q))
          m2 = b/q;
        if(r && !(c%q))
          m3 = c/r;

        if(p==a && q==b && r == c)
        cout<<"0"<<endl;

        else if((!p && !q && !r) && (a!=b) &&(b!=c)&& (a!=c) && (a+b!=c) && (a+c != b) && (b+c !=a) )
        cout<<"3"<<endl;


        else if (!a && !b && !c)
        cout<<"1"<<endl;


        else if ((d1==d2 && d2 ==d3) || (m1==m2 && m2==m3) || (d1==0 && d2==0  && d3) && (d2==0 && d3==0  && d1) && (d1==0 && d3==0  && d2)|| (d1==d2 && !d3) || (d3==d2 && !d1) ||(d1==d3 && !d2))
        cout<<"1"<<endl;

        else if((d1==d2+d3) || (d2== d1+d3 )|| (d3==d1+d2)|| (m1==m2 && (m1!=m3))|| (m1==m3 && (m1!=m2)) || (m3==m2 && (m1!=m2)) ||(d1==d2 && (d1!=d3))|| (d1==d3 && (d1!=d2)) || (d3==d2 && (d1!=d2)))
        cout<<"2"<<endl;

        else
        cout<<"3"<<endl;
    }
    return 0;
}

