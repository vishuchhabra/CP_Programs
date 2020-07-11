#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_set(int n)
{

    int coun =0;
    while(n)
    {
        int temp = n& 1;
        n=n>>1;
        if(temp)
            coun++;

    }
    return coun;
}
int main()
{
set<int> dp;
for(int i=1;i<=10000;i++)
{
    dp.insert(i+ count_set(i));
}
int cases;
cin>>cases;
while(cases--)
{
    int n;
    cin>>n;
    if(dp.find(n)!=dp.end())
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
}
}
