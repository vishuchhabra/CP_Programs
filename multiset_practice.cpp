#include<bits/stdc++.h>
#include<iostream>
#include<iostream>
using namespace std;
int main()
{
    multiset<pair<int,int>> t;
    t.insert(make_pair(4,5));
    t.insert(make_pair(4,5));
    t.insert(make_pair(4,5));
    t.insert(make_pair(56,6));
    //multiset<pair<int,int>>::iterator it;
    //sort(t.begin(),t.end());
    for(auto it:t)
      cout<<it.first<<" "<<it.second<<endl;

    return 0;
}

