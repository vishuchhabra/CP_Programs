#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

string first,second;
cin>>first>>second;
unordered_map<char,int>mp;
for(int i=0;i<first.length();i++)
mp[first[i]]++;
string res1="";
string res2="";
int i=0;
for(i=0;i<second.length();i++)
{

    if(mp[second[i]])
    {
        res1+=second[i];
        mp[second[i]]--;
    }
    else
        break;
}
for(int j=second.length()-1;j>i;j--)
{

    if(mp[second[j]])
    {
        res2+=second[j];
        mp[second[j]]--;
    }
    else
        break;
}
if(res1+res2=="")
    cout<<"-"<<endl;
else
{
    cout<<res1;
    for(int j=res2.size()-1;j>=0;j--)
        cout<<res2[j];
    cout<<endl;

}

return 0;
}
