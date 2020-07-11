#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_lcs(string first,string second ,int m,int n)
{

    int arr[m+1][n+1];
    for(int i=0;i<=m;i++)
        arr[i][0]=0;
    for(int i=0;i<=n;i++)
        arr[0][i]=0;
    for(int i=1;i<=m;i++)
    {

        for(int j=1;j<=n;j++)
        {
            if(first[m-i]==second[n-j])
                arr[i][j]= 1+arr[i-1][j-1];
            else
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);

        }
    }
    return arr[m][n];
}
int main()
{
   int cases;
   cin>>cases;
   while(cases--)
    {
        int m,n;
        cin>>m>>n;
   string first,second;
   cin>>first>>second;
   cout<<print_lcs(first,second,m,n)<<endl;
   }
   return 0;
}
