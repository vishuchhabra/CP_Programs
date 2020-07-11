#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll convert(string str,ll temp)
{

    ll mod =0;
    for(int i=0;i<str.length();i++)
        mod = (mod*10 + (str[i]-'0'))%temp;
    return mod;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd (b,a%b);
}

int main()
{
string  str;
cin>>str;
ll temp;
cin>>temp;
ll t = convert(str,temp);
cout<<gcd(t,temp)<<endl;
return 0;
}
