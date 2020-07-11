#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        string str;
        cin>>str;
        int count_1 =0, result =0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {

                result += count_1;
                count_1++;
            }

        }
        cout<<result<<endl;
    }
    return 0;
}
