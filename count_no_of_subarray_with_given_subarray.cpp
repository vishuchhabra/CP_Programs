//task to print the elements position in array for given sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int miss_ele(vector<int>arr,int n,int sum)
{
    int Count =0;
   unordered_map<int,vector<int>> temp;
//   for(int i=1;i<n;i++)
//      arr[i] = arr[i] + arr[i-1];
   int c_sum =0;
   for(int i=0;i<n;i++)
   {
       c_sum= c_sum + arr[i];
       if(c_sum==sum)
       {
        Count++;
       }
       if(temp.find(c_sum - sum) != temp.end())
       {
          Count+=temp[c_sum-sum].size();
          temp[c_sum].push_back(i);
       }
       else
       temp[c_sum].push_back(i);

    }
    return Count;
}
int main()
{

    int cases,n,val,sum;
    cin>>cases;
    for(int j=0;j<cases;j++)
    {
      cin>>n;
      vector<int> temp;
      for(int i=0;i<n;i++)
      {
        cin>>val;
        temp.push_back(val);
      }
      cin>>sum;
      cout<<miss_ele(temp,n,sum)<<endl;
    }
    return 0;
}


