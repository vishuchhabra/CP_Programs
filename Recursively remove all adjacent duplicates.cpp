#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false) ; cin.tie(NULL)
#define mp unordered_map<int,bool>
using namespace std;

string return_res(string str)
{
  int key =0;
  mp dp;
  if(!str.size())
        return str;
  if(str.size()==1)
        return str;
  for(int i=0;i<str.size();i++)
  {
        if(i==0)
        {
            if(str[i]==str[i+1]){
              dp[i]=false;
              key=1;
            }
            else
              dp[i] = true;
        }
        else if(i==str.size()-1)
        {
            if(str[i]==str[i-1]){
               dp[i]=false;
               key=1;
            }
            else
               dp[i] = true;
        }
        else
        {
            if(str[i]==str[i-1] || str[i]==str[i+1]){
                dp[i]= false;
                key=1;
            }
            else
                dp[i]= true;
        }
  }


        string res="";
        for(int i=0;i<str.size();i++)
        {
            if(dp[i])
                res+=str[i];
        }
    if(key)
        return return_res(res);
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
        cout<<return_res(str)<<endl;
           }
    return 0;
}
