#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>mp;
bool comp(string x,string y)
{
    for(int i=0;i<min(x.size(),y.size());i++)
    {

        if(x[i]==y[i])
            continue;
        return mp[x[i]]<mp[y[i]];
    }
    return x.size() < y.size();
}
int main()
{
    string str;
    cin>>str;
    mp.clear();
    for(int i=0;i<str.length();i++)
    mp[str[i]]=i;
    vector<string> temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        temp.push_back(str);
    }
    sort(temp.begin(),temp.end(),comp);
    for(auto i :temp)
        cout<<i<<" ";
    return 0;
}
