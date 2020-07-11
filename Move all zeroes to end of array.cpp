#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void move_all(vector<int> arr)
{
    int c =0;

    for(auto i:arr)
    {
        if(i!=0)
        {
          cout<<i<<" ";
          c++;
        }
    }
    for(int j=1;j<=(arr.size()-c);j++)
        cout<<"0 ";
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
       for(int j=0;j<n;j++)
       {

           cin>>val;
           temp.push_back(val);
       }
       move_all(temp);
    }
    return 0;
}

