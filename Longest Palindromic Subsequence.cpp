#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int lps(string &str,  int low , int high,vector<vector<int> >&dp)
{
 if(low> high)
    return 0;
 if(low == high )
    return 1;
 if(str[low]== str[high] && low+1== high)
    return 2;
 if(dp[low][high])
    return dp[low][high];
 if(str[low]==str[high]){
    int first =  2 + lps(str,low+1 , high-1,dp);
    dp[low][high]= first;
    return first;
    }

 int second = max(lps(str,low , high-1,dp),lps(str,low+1 , high,dp) );
 dp[low][high] =second;
 return second;
}
int main()
{
    //fast;  //fast is creating error here //be careful  here
    int cases;
    cin>>cases;
    while(cases--)
    {
        string str;
        cin>>str;
        int siz = str.length();
        vector<vector<int> >dp(siz,vector<int>(siz));
        cout<<lps(str,0,str.length()-1, dp)<<endl;
    }
    return 0;
}
