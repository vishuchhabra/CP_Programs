#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int cases;
    cin>>cases;
    while(cases--)
    {
       double  n;
       cin>>n;
       cout<<setprecision(8)<<fixed<<n/(n+1)<<endl;
    }
    return 0;
}
