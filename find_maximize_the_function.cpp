#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);//for taking the fast input
    cin.tie(0);//for taking the fast input
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,val;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
        cin>>val;
        a[i] = val +i;
        b[i] = val -i;
        }
        int mina= a[0],maxa = a[0],minb =b[0],maxb=b[0];
        for(int i=1;i<n;i++)
        {
        if(a[i]>maxa)
            maxa = a[i];
        if(a[i]<mina)
            mina= a[i];
        if(b[i]>maxb)
            maxb =b[i];
        if(b[i]<minb)
            minb =b[i];
        }
        cout<<max((maxb-minb),(maxa -mina))<<endl;;

    }
    return 0;
}
