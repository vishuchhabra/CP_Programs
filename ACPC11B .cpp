#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int result(vector<int> first ,vector<int> second)
{
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    int res=INT_MAX;
    int a=0,b=0;
    while(a<first.size() && b<second.size())
    {

        if(abs(first[a]-second[b])<res)
            res =abs(first[a]-second[b]);
        if(first[a]>second[b])
            b++;
        else
            a++;
    }
    return res;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        vector<int>first,second;
        int m,n,val;
        cin>>m;
        for(int i=0;i<m;i++)
        {

            cin>>val;
            first.push_back(val);
        }
        cin>>n;
        for(int i=0;i<n;i++)
        {

            cin>>val;
            second.push_back(val);
        }
        cout<<result(first,second)<<endl;
    }
}
