#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n,val;
        cin>>n;
        vector<int> first,second;
        for(int i=0;i<n;i++)
        {

            cin>>val;
            first.push_back(val);
        }
        for(int i=0;i<n;i++)
        {

            cin>>val;
            second.push_back(val);
        }
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        int res=0;
        for(int i=0;i<n;i++)
            res+=first[i]*second[i];
        cout<<res<<endl;
    }
    return 0;
}
