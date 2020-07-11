#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vc vector<char>
using namespace std;
int main()
{
    fast;
    int n;
    cin>>n;
    while(n--)
    {
        vc arr;
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
           arr.push_back(str[i]);
        bool val = next_permutation(arr.begin(),arr.end());
        if(val)
        {
            for(auto i : arr)
                cout<<i;
            cout<<endl;
       }
       else
        cout<<"no answer"<<endl;


    }
    return 0;
}

