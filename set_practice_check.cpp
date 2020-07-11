#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    set<int> temp;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        temp.insert(n);
    }
    cout<<*(temp.begin())<<endl;
    return 0;//at here there is only thing work that is iterator
}
