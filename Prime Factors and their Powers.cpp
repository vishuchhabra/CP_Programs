#include<bits/stdc++.h>
#include<iostream>
#define siz 10001
using namespace std;
vector<int> seive()
{
    vector<bool>temp(siz,true);
    temp[0]=false;temp[1]=false;
    for(int i=2;i*i<=siz;i++)
    {
        if(temp[i])
        for(int j= i*i;j<=siz;j+=i)
        {
          temp[j]=false;
        }
    }
    vector<int>res;
    for(int i=0;i<siz;i++)
        if(temp[i])
        res.push_back(i);

return res;
}
void print_prime(int n)
{
    vector<int> arr=seive();
    for(int i=0;arr[i]<=n;i++)
    {
        if(n%arr[i]==0)
        {
            cout<<arr[i]<<" ";
            int coun =0;
            while(n%arr[i]==0)
            {
               n/=arr[i];
               coun++;
            }
            cout<<coun<<" ";
        }
    }
    cout<<endl;
}
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
      int n;
      cin>>n;
      print_prime(n);

    }
    return 0;
}
