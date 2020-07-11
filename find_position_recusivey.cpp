#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_pos(int n,int k)
{
    int val =k*2;
    if(val>n)
    {
       return k;
    }
    return (find_pos(n,val));
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n,k=1;
        cin>>n;
        cout<<find_pos(n,k)<<endl;
    }
    return 0;
}
