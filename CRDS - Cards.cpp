#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        long long n;
        cin>>n;
        long long res = (3*(((long long )n*(n+1))/2))-n;
        cout<<res%mod<<endl;
    }
    return 0;
}
