#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

      int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//        cin>>arr[i];
//    for(auto t: arr)
//        cout<<"elements : "<<t<<" ";
    multiset<int> t;
    for(int i=0;i<5;i++)
    {
      cin>>n;
      t.insert(n);
    }
    cout<<"elements:";
    for(auto i:t)
        cout<<i<<" ";
    return 0;
}
