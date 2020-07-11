#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll select(int n,int r)
{
    if(n<r)
        return 0;
    if(n==r)
        return 1;
    ll  res=1;
    int diff = n-r;
    for(int i=1;i<=diff;i++)
    {
        res = ((n-i+1)*res)/i;
    }
    return res;
}
int solution(int n)
{
    ll coun =0;
    int c=1;
    for(int i=0;i<64;i++)
    {

        if((ll(1)<<i) & n)
        {

            coun+=select(i,c);
            c++;
        }
    }
    return coun;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        cout<<solution(n)<<endl;
    }
    return 0;
}
