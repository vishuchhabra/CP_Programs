#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false) ; cin.tie(NULL)
#define mod  1000000007
#define vi vector<int>
#define ll  long long
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        ll n;
        cin>>n;
        if(n%2)
        {
            cout<<n/2<<endl;
        }
        else
        {
            int temp = 1;
            while(!(n&temp))
            {
                n= n>>1;
            }
            n=n>>1;
            cout<<n<<endl;
        }

    }
    return 0;
}
