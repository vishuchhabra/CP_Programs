#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_right(vector<int> temp)
{
    int mx = temp[temp.size()-1];
    temp[temp.size()-1] = -1;
    for(int i = temp.size()-2;i>=0;i--)
    {
        int t = temp[i];
        temp[i] =mx;

        if(t>mx)
            mx =t;
    }
    for(auto i: temp)
        cout<<i<< " ";
    cout<<endl;
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
      for(int i=0;i<n;i++)
      {
          cin>>val;
          temp.push_back(val);
      }
      print_right(temp);

  }
  return 0;
}
