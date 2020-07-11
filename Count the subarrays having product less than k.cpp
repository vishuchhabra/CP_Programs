#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int count_sub(vector<ll>temp,ll k)
{

    ll mul=1;
    int c =0;
    ll start =0;
    for(int i=0;i<temp.size();i++)
    {
        mul*=temp[i];
        while(mul>=k && start<i)
            mul/=temp[start++];
        if(mul<k)
         c += i-start+1;
    }
    return c;
}
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {

        ll m,k;
        cin>>m>>k;
        vector<ll> temp;
        int val;
        for(int i=0;i<m;i++)
        {

            cin>>val;
            temp.push_back(val);
        }
        cout<<count_sub(temp,k)<<endl;

    }
    return 0;
}
