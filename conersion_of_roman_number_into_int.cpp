#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int return_val(char c)
{
    if(c=='I')
        return 1;
    if(c=='V')
        return 5;
    if(c=='X')
        return 10;
    if(c=='L')
        return 50;
    if(c=='C')
        return 100;
    if(c=='D')
        return 500;
    if(c=='M')
        return 1000;
}
int return_value(string str)
{
    int res=0;
    for(int i=0;i<str.length();i++)
    {
       int first = return_val(str[i]);
       if(i+1<str.length())
       {
           int second = return_val(str[i+1]);
           if(first>=second)
           {
              res+=first;
           }
           else
           {
               res+=second-first;
               i++;

           }

       }
       else
       {
           res+=first;
       }
    }
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
      cout<<return_value(str)<<endl;
  }
  return 0;
}
