#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base :: sync_with_stdio(false); cin.tie(NULL)
#define sc stack<char>
using namespace std;
string remove_d(string str)
{
    if(!str.size() || str.size()==1)
        return str;
    sc temp;
    for(auto i: str)
        temp.push(i);
    int key_def =0;
    int flag=0;
    char c =temp.top();
    temp.pop();
    string res="";
    while(!temp.empty())
    {
        if(temp.top()==c)
        {
            temp.pop();
            flag =1;
            key_def = 1;
        }
        else
        {
            if(!flag)
                res+=c;
            c= temp.top();
            temp.pop();
            flag =0;
        }
    }
    if(!flag)
        res+=c;
    reverse(res.begin(),res.end());

    if(key_def)
        return remove_d(res);
    return res;
}
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        string str;
        cin>>str;
        cout<<remove_d(str)<<endl;
    }
    return 0;
}
