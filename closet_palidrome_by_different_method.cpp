#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
string atob(ll n)
{

    stringstream s;
    s<<n;
    string str;
    s>>str;
    return str;
}
ll atob(string str)
{
    ll  n;
    stringstream s;
    s<<str;
    s>>n;
    return n;
}
ll  getmirror(ll n)
{
    string str = atob(n);
    ll i=0,j=(str.size()-1);
    while(i<j)
    str[j--] = str[i++];
    n = atob(str);
    return n;
}
ll  print_close(ll n)
{
    ll  p1 = getmirror(n);
    int siz = atob(p1).size();
    ll p2 = getmirror(p1+ pow(10,siz/2));
    ll p3  = getmirror(p1-pow(10,siz/2));
    ll  f = p3;

    if((abs(p1-n))<(abs(f-n)))
        f=p1;
    if((abs(p2-n))<(abs(f-n)))
     f=p2;
    return f;
}
int main()
{
    int  cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        ll n;
        cin>>n;
        cout<<print_close(n)<<endl;
    }

    return 0;

}
