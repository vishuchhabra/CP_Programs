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
        int n;
        cin>>n;
        int val =1;
        for(int i=1;i<=n; )
        {
            if(i%2)
            {
                for(int j=0;j<n;j++){
                    cout<<val<<" ";
                    val++;
                }
                i++;
                cout<<endl;
            }
            if(i<=n)
            {

                val = val+ n-1;
                int temp= val;
                for(int j=0;j<n;j++ )
                {
                    cout<<temp<<" ";
                    temp--;

                }
                i++;
                val++;
                cout<<endl;
            }

        }
    }
    return 0;
}
