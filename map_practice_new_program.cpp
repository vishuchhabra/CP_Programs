#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;
bool run(pair<int,int> t , pair<int ,int> s)
{

    return t.first<=s.first;
}//decorator in c++ but my bad it is not working

int main()
{
    set<pair<int,int>,greater<pair<int,int>>> check;
    check.insert(make_pair(34,5));
    check.insert(make_pair(34,5));

    check.insert(make_pair(31,5));

    check.insert(make_pair(32,5));
    set<pair<int,int>> ::iterator it;
    for(it=check.begin();it!=check.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;

    return 0;
}
