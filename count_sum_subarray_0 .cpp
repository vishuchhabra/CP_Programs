#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int count_zero_sub(ll arr[],int n)
{
   unordered_map<ll,ll>mp;
   ll sum=0;
   int coun=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
       if(!sum)
        coun++;


           if(mp.find(sum)!=mp.end())
           {

               coun+=mp[sum];

           }
           mp[sum]++;

       }


   return coun;
}
int main()
{

    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];
        }
        cout<<count_zero_sub(arr,n)<<endl;
    }
    return 0;
}
