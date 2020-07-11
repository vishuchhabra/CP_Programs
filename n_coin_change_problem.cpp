#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//using recursion we can also do this /again complexity is to high

int no_ways(int n,int arr[],int siz,int **temp)
{
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(siz==0)
        return 0;
    if(temp[n][siz]>-1)
        return temp[n][siz];

    int first = no_ways(n-arr[0],arr,siz,temp);
    int second  = no_ways(n,arr+1,siz-1,temp);
    temp[n][siz]=first+second;
    return first+second;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
     int siz;
     cin>>siz;
     int arr[siz];
     for(int i=0;i<siz;i++)
        cin>>arr[i];
     int n;
     cin>>n;
     int **temp;
     temp =new int*[n+1];
     for(int i=0;i<=n;i++)
        temp[i]=new int[siz+1];
     for(int i=0;i<=n;i++)
        for(int j=0;j<=siz;j++)
        temp[i][j]=-1;
    cout<<no_ways(n,arr,siz,temp)<<endl;
    }
    return 0;
}
