#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_sub(vector<int>arr,int n)
{
    set<vector<int>>s1;
    int siz = pow(2,arr.size());
    for(int i=0;i<siz;i++)
    {
        vector<int>temp;
        for(int j=0;j<arr.size();j++)
        {
            if(i &(1<<j))
            {

                temp.push_back(arr[j]);
            }
        }
        s1.insert(temp);
    }
    for(auto i : s1)
    {
        cout<<"(";
       for(int j=0;j<i.size();j++){
            cout<<i[j];
            if(j<(i.size()-1))
                cout<<" ";
            }
        cout<<")";
   }
   cout<<endl;

}
int main()
{
  int cases;
  cin>>cases;
  while(cases--)
  {

      int n,val;
      cin>>n;
      vector<int>arr;
      for(int i=0;i<n;i++)
      {
        cin>>val;
        arr.push_back(val);
      }
      sort(arr.begin(),arr.end());
      print_sub(arr,n);
  }
  return 0;
}
