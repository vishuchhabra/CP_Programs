//chef your dish is some what tricky
#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
       int n;
       string str;
       cin>>str;
       n = str.length();
       int coun =0;
       for(int i=1;i<n/2;i++)
       {
           int pos = i*2;
           string first = str.substr(0,pos);
           string second = str.substr(pos,n-pos);
           int m = first.size();
           int n = second.size();
           if(first.substr(0,m/2)==first.substr(m/2,m/2) && second.substr(0,n/2)==second.substr(n/2,n/2))
            coun++;
       }
       cout<<coun<<endl;
    }
    return 0;
}
