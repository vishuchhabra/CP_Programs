#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n=5,val;
    for(int i=0;i<5;i++)
    {
      cin>>val;
      arr.push_back(val);
    }
    //vector<int> temp(arr.begin(),arr.begin()+2);//it will print till only two
    vector<int> temp(arr.begin()+2,arr.end());
    for(auto i: temp)
        cout<<i<<" ";


    return 0;
}
