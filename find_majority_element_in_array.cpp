#include<bits/stdc++.h>
using namespace std;
int major_ret(vector<int> temp,int n)
{
    unordered_map <int,vector<int>> mp;
    for(auto i : temp )
       mp[i].push_back(1);
    for(auto p:mp)
    {
        if(p.second.size()>(n/2))
            return p.first;
    }
    return -1;

}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n,val;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {

            cin>>val;
            temp.push_back(val);
        }
        cout<<major_ret(temp,n)<<endl;
    }
    return 0;
}
