#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset <int> set1;
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        set1.insert(n);
    }
    cout<<"Elements:" ;
    for(auto i:set1)
    {

        cout<<i<<" ";
    }
    int y;
//    cout<<"Element:"<<endl;
//    cin>>y;
//    auto  tag = set1.find(y);
//    if(tag==set1.end())
//        cout<<"Element not found"<<endl;
//    else
//    {
//        cout<<"element deleted"<<endl;
//        set1.erase(tag);
//    }
//    cout<<"After deleting elements are:"<<endl;
//    for(auto i:set1)
//    {
//
//        cout<<i<<" ";
//    }
//      cin>>y;
//      cout<<"Amount:"<<set1.count(y)<<endl;
      //cin>>y;
      any_of(set1.begin(),set1.end(),[](int x){
            return  x<0;})?cout<<"Negative numbers are present":cout<<"Negative numbers are not present"<<endl;
      return 0;

    return 0;
}
