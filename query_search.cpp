#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,q,val;
    cin>>n >> r >> q;
    vector< int > arr;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    for(int i=0;i<r;i++)
    {
        int ele = arr[n-1];
        arr.pop_back();
        arr.insert(arr.begin(),ele);
    }
    for(int i=0;i<q;i++)
    {
       cin>>r;
       cout<<arr[r]<<endl;
    }
    return 0;
}

