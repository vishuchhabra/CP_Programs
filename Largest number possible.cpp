#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,s;
        cin>>n>>s;
        if((!n) || (!s) || s>(9*n) )
        {
            cout<<"0";
            continue;
        }
        while(n)
        {
            if(s>9){
                cout<<"9";
                s-=9;
            }
            else if (s==0)
                cout<<"0";
            else{
                cout<<s;
                s=0;
            }

            n--;
        }
        cout<<endl;
    }
    return 0;
}
