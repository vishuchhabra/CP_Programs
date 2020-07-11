#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string first,string second)
{
    if(first.size()!=second.size())
        return first.size() < second.size();

    return first<second;//if size is equal then it will automatically sort
}
int main()
{
    int n;
    cin>>n;
    vector<string>arr;
    string temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),compare);
    for(auto  i : arr)
        cout<<i <<endl;
    return 0;
}
