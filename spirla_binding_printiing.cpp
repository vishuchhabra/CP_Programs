#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void first_f(vector<vector<int>>arr)
{
    int m=arr.size(),n=arr[0].size(),k=0,l=0;
    while(k<m && l<n)
    {
        for(int i=l;i<n;i++)
         cout<<arr[k][i]<<" ";
        k++;
        for(int i=k;i<m;i++)
            cout<<arr[i][n-1]<<" ";
        n--;
        if(k<m)
        {

            for(int i=n-1;i>=l;i--)
                cout<<arr[m-1][i]<<" ";
              m--;
        }
        if(l<n)
        {
            for(int i=m-1;i>=k;i--)
              cout<<arr[i][l]<<" ";
           l++;
        }


    }
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
     int m,n,val;
     cin>>m>>n;
     vector<int>temp;
     vector<vector<int>>arr;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {cin>>val;
          temp.push_back(val); }
          arr.push_back(temp);
          temp.clear();
    }
    first_f(arr);
    cout<<endl;
    }
    return 0;
}
