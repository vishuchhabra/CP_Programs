#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define M 101
using namespace std;
vector<int> seive() //s for the prime numbers
{
    vector<int>res;
    vector<bool> arr(101,true); //there is no any way to initialize the array with one value rather than zero only
    arr[0]=false;arr[1]=false;
    for(int i=2;i*i<=M-1;i++)
    {
        if(arr[i])
        {
          for(int j=i*i;j<=M-1;j+=i)
          {
              arr[j]=false;
          }
        }
    }
    for(int i=0;i<M;i++)
        if(arr[i])
        res.pb(i);
return res;

}
long long  divisors(int n,vector<int>& arr)
{

    long long  result =1;
    for(auto i:arr)
    {
        if(i>n)
            break;
        int k =i;
        int co=0;
        while(k<=n)
        {
            co+=n/k;
            k=k*i;
        }
        result = result *(co+1);

    }
    return result;
}
int main()
{
    vector<int > tem  =seive();
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n;
        cin>>n;
        cout<<divisors(n,tem)<<endl;
    }
    return 0;
}
