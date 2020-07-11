#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define for1(arr)  for(auto i : arr)
#define vp vector<pair<char, bool>
using namespace std;
int main()
{
   fast;
   int cases;
   cin>>cases;
   while(cases--)
   {
       string str;
       cin>>str;
       vector<pair<char, bool>> v;
       for1(str)
       {
          v.push_back({i,false});
       }
       int count_pair=0;

       for(int i=0;i<(str.size()-1) ;i++)
       {
           if( (!(v[i].second) ) &&  str[i]!= str[i+1])
           {

               count_pair++;
               v[i].second =true;
               v[i+1].second=true;

           }



       }
       cout<<count_pair<<endl;

   }
   return 0;
}
