#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        string str;
        cin>>str;
        int n = str.length();
        int lps[n] ={0};
        int i=1;
        int len  =0;
        while(i<n)
        {
            if(str[i]==str[len])
            {

                len++;
                lps[i]=len;
                i++;
            }
            else
            {

                if(len!=0)
                {
                    len  =  lps[len-1];
                }
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
        cout<<lps[n-1]<<endl;

    }
    return 0;
}
