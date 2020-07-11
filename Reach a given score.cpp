#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_ways(int n,int arr[],int siz,int **temp)
{
  if(n==0)
    return 1;
  if(siz==0)
    return 0;
  if(n<arr[0])
    return 0;
 // if(temp[n][siz]>-1)
   // return temp[n][siz];
  int first = print_ways(n-arr[0],arr,siz,temp);
  int second =print_ways(n,arr+1,siz-1,temp);
  temp[n][siz]= first+second;
  return temp[n][siz];
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int arr[]={3,5,10};
        int n;
        cin>>n;
        int **temp;
        temp =new int*[n+1];
        for(int i=0;i<=n;i++)
            temp[i]=new int[4];
        for(int i=0;i<=n;i++)
            for(int j=0;j<4;j++)
            temp[i][j]=-1;
        cout<<print_ways(n,arr,3,temp)<<endl;
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_ways(int n,int arr[],int siz,int **temp)
{
  if(n==0)
    return 1;
  if(siz==0)
    return 0;
  if(n<arr[0])
    return 0;
 // if(temp[n][siz]>-1)
   // return temp[n][siz];
  int first = print_ways(n-arr[0],arr,siz,temp);
  int second =print_ways(n,arr+1,siz-1,temp);
  temp[n][siz]= first+second;
  return temp[n][siz];
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int arr[]={3,5,10};
        int n;
        cin>>n;
        int **temp;
        temp =new int*[n+1];
        for(int i=0;i<=n;i++)
            temp[i]=new int[4];
        for(int i=0;i<=n;i++)
            for(int j=0;j<4;j++)
            temp[i][j]=-1;
        cout<<print_ways(n,arr,3,temp)<<endl;
    }
    return 0;
}
