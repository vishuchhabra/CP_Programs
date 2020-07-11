#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
        int cases;
        cin>>cases;
        while(cases--)
        {
           int siz,q;
           cin>>siz>>q;
           string str;
           cin>>str;

           unordered_map<char,int> mp,temp;
           for(int i=0;i<siz;i++)
               mp[str[i]]++;
           temp = mp;
           for(int i=0;i<q;i++)
           {
            int val;
            cin>>val;
            int c=0;
            unordered_map<char ,int> ::iterator it;
            for(it= mp.begin();it!=mp.end();it++)
            {
                  it->second -= val;
                  if(it->second>0)
                    c+=it->second;
            }
            cout<<c<<endl;
            mp=temp;

            }
        }
    return 0;
}
