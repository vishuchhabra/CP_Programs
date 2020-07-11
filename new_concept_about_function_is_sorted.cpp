#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int cases;
   cin>>cases;
   while(cases--){
   string val;
   int n;
   cin>>n;
   string arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];

   for(int i=0;i<n;i++)
      sort(arr[i].begin(),arr[i].end());
   string res="YES";
   int last;
   for(int i=0;i<n;i++)
   {
       last = (int)arr[0][i];

       for(int j=1;j<n;j++)
       {
           int first = (int)arr[j][i];
           if(last<=first)
            last = first;
           else
           {
              res="NO";
              break;
           }

       }
   }


   cout<<res<<endl;
   }
   return 0;
}
