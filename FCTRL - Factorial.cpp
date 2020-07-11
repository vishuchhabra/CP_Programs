#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_val(int n)
{
    int res=0;
    int div =5;
    while(div<=n)
    {

        res+=n/div;
        div*=5;
    }
    return res;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        cout<<print_val(n)<<endl;
    }
    return 0;
}
