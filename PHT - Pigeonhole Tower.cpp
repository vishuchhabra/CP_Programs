#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int cases;
    cin>>cases;
    int g=1;
    while(cases--)
    {
        long long  n;
        cin>>n;

        long long b = sqrt(n);
        while(true)
        {

            if(b*(b+2)<=n)
            {
                cout<<"Case"<<" "<<g<<": "<<b<<endl;

                break;
            }
            else
                b--;
        }
     g++;
    }
    return 0;
}
