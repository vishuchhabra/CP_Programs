#include<bits/stdc++.h>
#include<iostream>
#define maxi 1000001
using namespace std;
int main()
{

    int cases;
    cin>>cases;
    while(cases--)
    {
         int n,flag=0;
         cin>>n;
         vector<bool> temp(n+1,true);
         temp[0]=false;temp[1]=false;
         for(int i=2;i*i<=n;i++)
         {
         for(int j =i*i;j<=n;j+=i)
         temp[j]=false;
         }

        for(int i=2;i<n;i++)
        {
         if(temp[i]&&temp[n-i])
         {

             flag =1;
             cout<<i<<" "<<n-i<<endl;
             break;
         }
        }
        if(flag ==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
