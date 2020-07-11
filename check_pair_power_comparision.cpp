//main trick is to use array as compare to vector

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int  each_t(int  x, int y[],int  notp[],int n)
{
    if(!x)
        return 0;
    if(x==1)
        return notp[0];
    auto   temp =y+n- upper_bound(y,y+n,x);
    int add =(int) temp  ;

    add += (notp[0]+notp[1]);
    if(x==2)
    add -= (notp[3]+notp[4]);
    if(x==3)
    add += notp[2];
    return add;
}
long long  count_pair(int x[],int  y[],int m,int n)
{
    int   notp[5]={0};
    sort(y,y+n);
    int pos =0;
    while(y[pos]<5)
        notp[y[pos++]]++;

    long long  count_p =0;
    for(int i=0;i<m;i++)
    count_p += each_t(x[i],y,notp,n);
    return count_p;
}
int main()
{
    int  cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int   m,n,val;
        cin>>m>>n;
        int x[m];
        int y[n];
        for(int  i=0;i<m;i++)
        cin>>x[i];
        for(int   i=0;i<n;i++)
            cin>>y[i];
        cout<<count_pair(x,y,m,n)<<endl;
    }
    return 0;
}
