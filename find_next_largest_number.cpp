#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_largest(vector<int>arr,int n)
{
    vector<int>temp = arr;
    stack<int> st;
    unordered_map<int,int> mp;
    st.push(arr[0]);
    for(int i=1;i<n;i++)
    {

        while(!st.empty() && st.top()<arr[i])
        {
            mp[st.top()]=arr[i];
            st.pop();
        }
        st.push(arr[i]);
    }
    while(!st.empty())
    {
        mp[st.top()]=-1;
        st.pop();
    }
    for(auto p:temp)
     cout<<mp[p]<<" ";
    cout<<endl;

}
int main()
{
    int cases,n,val;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            temp.push_back(val);
        }
        print_largest(temp,n);
    }
    return 0;
}
