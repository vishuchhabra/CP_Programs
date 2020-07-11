#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    set<int> s1;
    s1.insert(1);
    s1.insert(342);
    s1.insert(324);
    s1.insert(34324);
    s1.insert(344565);
    for(auto i: s1)
        cout<<i <<" ";
    cout<<endl;
    s1.erase(342); for(auto i: s1)
        cout<<i <<" ";
    cout<<endl;

}
