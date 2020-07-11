#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--){
    int m,n,maxi=INT_MIN;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>arr[i][j];

    for(int i=0;i<n;i++)
    {
        int dp[m]={0};
        int i_max =INT_MIN;

        for(int j=i;j<n;j++)
        {
            for(int p=0;p<m;p++)
             dp[p]+=arr[p][j];
            int base =0;
            for(int p=0;p<m;p++)
            {
                    base+=dp[p];
                    if(base>i_max)
                        i_max =base;
                    if(base<0)
                        base=0;
            }
        }
        if(i_max>maxi)
            maxi=i_max;

    }
    cout<<maxi<<endl;}
    return 0;
}
