#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_ball(vector<int> first, vector<int> second,int m,int n)
{
     int i=0,j=0;
     int f=0,s =0,res=0;
     while(i<m && j<n)
     {
         if(first[i]<second[j])
            f+=first[i++];
         else if(first[i]>second[j])
            s+=second[j++];
         else
         {
             res+= max(f,s)+ second[i];
             int temp= second[i];
             i++;
             j++;
             f=0;
             s=0;
             while(i<m && first[i]==temp)
                res+=first[i++];
             while(j<n && second[j]==temp)
                res+=second[j++];
         }
     }
     while(i<m)
     f+=first[i++];
     while(j<n)
        s+=second[j++];
     res+=max(f,s);
     return res;
}
int main()
{
  int cases;
  cin>>cases;
  while(cases--)
  {
      int m,n,val;
      vector<int> first,second;
      cin>>m>>n;
      for(int i=0;i<m;i++)
      {
          cin>>val;
          first.push_back(val);
      }
      for(int i=0;i<n;i++)
      {
          cin>>val;
          second.push_back(val);
      }
      cout<<max_ball(first,second,first.size(),second.size())<<endl;
  }
  return 0;
}
