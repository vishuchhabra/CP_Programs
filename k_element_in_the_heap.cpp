#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,val;
    vector<int> arr;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    make_heap(arr.begin(),arr.end());
    for(int i=0;i<k;i++)
    {
       pop_heap(arr.begin(),arr.end());
       cout<<*(arr.end()-1)<< " ";
       arr.pop_back();
    }
    return 0;
}
