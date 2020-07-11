#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int check_pali(string str)
{
    int last = str.length()-1;
    for(int i=0;i<(str.length()/2);i++)
    {
        if(str[i]!=str[last])
            return 0;
        last--;
    }
    return 1;
}
string convert(long long n)
{
    string str = to_string(n);
    return str;
}
int print_closet(long long n)
{
    if(check_pali(convert(n)))
        return n;
    int pos = n+1;
    int neg = n-1;
    while(1)
    {
       if(check_pali(convert(neg)))
            return neg;
       neg--;
       if(check_pali(convert(pos)))
       return pos;
       pos++;
    }
}
int main()
{
  int cases;
  cin>>cases;
  for(int i=0;i<cases;i++)
  {
      long long n;
      cin>>n;
      cout<<print_closet(n)<<endl;
  }
  return 0;
}
