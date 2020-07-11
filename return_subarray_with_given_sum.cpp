//task to print the elements position in array for given sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void miss_ele(vector<int>arr,int n,int sum)
{
   unordered_map<int,int> temp;
//   for(int i=1;i<n;i++)
//      arr[i] = arr[i] + arr[i-1];
   int c_sum =0;
   for(int i=0;i<n;i++)
   {
       c_sum= c_sum + arr[i];
       if(c_sum==sum)
       {
        cout<<"1"<<" "<<i+1<<endl;//adding 1 just for position starting from 1 rather than zero
        return;
       }
       if(temp.find(c_sum - sum) != temp.end())
       {
          cout<<temp[c_sum-sum]+1+1<<" "<<i+1<<endl;//adding 1 ,for starting position starting from 1
          return;
       }
       temp[c_sum]=i;
    }
    cout<<"-1"<<endl;//for default case
}
int main()
{

    int cases,n,val,sum;
    cin>>cases;
    for(int j=0;j<cases;j++)
    {
      cin>>n>>sum;
      vector<int> temp;
      for(int i=0;i<n;i++)
      {
        cin>>val;
        temp.push_back(val);
      }
      miss_ele(temp,n,sum);
    }
    return 0;
}

