#include<iostream>
#include<bits/stdc++.h>
#define pdd pair<double,double>
using namespace std;
pdd func_int(pdd a,pdd b,pdd c,pdd d)
{
    double a1 = b.second - a.second;
    double a2 = d.second - c.second;
    double b1 = a.first-b.first ;
    double b2 =  c.first-d.first;
    double c1 = (a1*(a.first))+(b1*(a.second));
    double c2 =(a2*(c.first))+(b2*(c.second));
    double det = (b2*a1)-(a2*b1);
    if(!det)
    return {FLT_MAX,FLT_MAX};
    return {(((c1*b2)-(b1*c2))/det),((a1*c2)-(c1*a2))/det};

}
int main()
{
    pdd A = {1, 1};
    pdd B = make_pair(4, 4);
    pdd C = make_pair(1, 8);
    pdd D = make_pair(2, 4);
    pdd res = func_int(A,B,C,D);
    cout<<res.first<<" "<<res.second<<endl;
    return 0;
}
