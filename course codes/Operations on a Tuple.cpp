#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int p,q,r,a,b,c;
        cin>>p>>q>>r>>a>>b>>c;
        int d1 = a-p;
        int d2 = b-q;
        int d3 = c-r;
        double m1 = 9999999999 ,m2 = 9999999998,m3 = 9999999997;
        if(!p)
          m1 = a/p;
        if(!q)
          m2 = b/q;
        if(!r)
          m3 = c/r;
        if(p==a && q==b && r == c)
        cout<<"0"<<endl;
        else if((m1==m2 && m2==m3)||(d1 ==d2 && d2 ==d3)||(!d1 && (d2==d3 || m2 ==m3)) ||(!d2 && (d1==d3 || m1 ==m3) )||(!d3 &&(d2==d1 || m2 ==m1) ) || (! d1 && !d2 ) || (!d2 && !d3) || (!d1 && !d3 ))
        cout<<"1"<<endl;
        else if((m1!= m2 && m2 != m3 && m1!= m3 )&& (d1!=d2 && d2!=d3 && d1!=d3))
        cout<<"3"<<endl;

        else
        cout<<"2"<<endl;
    }
    return 0;
}
