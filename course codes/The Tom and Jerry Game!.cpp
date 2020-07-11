#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        unsigned long long  n;
        cin>>n;

        unsigned long long  coun = n/(unsigned long long)2;
        if(!(unsigned long long )(n%(long long)2))
            coun--;
        coun = coun%mod;
        cout<<coun<<endl;

    }
    return 0;
}
