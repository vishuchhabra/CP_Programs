#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int miss_ele(vector<int>arr,int n)
{
    int temp[n+1]={0};
    for(auto p:arr)
        temp[p]++;
    for(int i=1;i<=n;i++)
        if(!temp[i])
          return i;
}
int main()
{

    int cases,n,val;;
    cin>>cases;
    for(int j=0;j<cases;j++)
    {
      cin>>n;
      vector<int> temp;
      for(int i=0;i<n-1;i++)
      {
        cin>>val;
        temp.push_back(val);
      }
      cout<<miss_ele(temp,n)<<endl;
    }
    return 0;
}
