#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    cout<<"Substring are following as:"<<endl;
    int n = str.length();
    for(int len=1;len<=n;len++)
    {

        for(int i=0;i<=n-len;i++)
        {

            int j = i+len -1;
            for(int k=i;k<=j;k++)
                cout<<str[k];
            cout<<endl;
        }
    }
    return 0;
}
