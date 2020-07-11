#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define input(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
using namespace std;
string print_result(string str)
{
   int n = str.length();
   int i=0;
   while(i<n)
   {
     if(i+2<n && str.substr(i,3)=="RYY")
        i+=3;
     else if ( i+1<n && str.substr(i,2)=="RY")
        i+=2;
     else if (str[i]=='R')
        i++;
     else
        return "NO";
   }
   return "YES";
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
        cout<<print_result(str)<<endl;
    }
    return 0;
}
