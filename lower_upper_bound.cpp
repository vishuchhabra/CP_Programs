#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>t={1,3,3,4,5,6,6,7,8};
    cout<<lower_bound(t.begin(),t.end(),3)-t.begin()<<endl;

    cout<<upper_bound(t.begin(),t.end(),3)-t.begin()<<endl;

    return 0;
}
