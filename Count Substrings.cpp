#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_sub(string str)
{
   int base =0;
   int res=0;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]=='1')
       {
           res += base*1;
           base++;
       }

   }
   return res;
}
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        string str;
        cin>>str;
        cout<<count_sub(str)<<endl;
    }
    return 0;
}
