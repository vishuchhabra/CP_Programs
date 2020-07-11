#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool  check(long long  arr[],int n,long long mid,int cows)
{
    int coun =1;
    int last = 0;
    for(int i=1;i<n;i++)
    {
        if((arr[i]-arr[last])>=mid)
        {

            coun++;
            last =i;
        }
    }
    if(coun>=cows)
        return true;
    else
        return false;
}
int main()
{

	int cases;
	cin>>cases;
	while(cases--){
    int n,cows;
    cin>>n>>cows;
    long long  arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int ans=-1;
    long long start =0,last =arr[n-1]-arr[0];
    while(start<=last)
    {
       long long mid  = start + (last-start)/2;
       if(check(arr,n,mid,cows))
       {
          ans=mid;
          start =mid+1;
       }
       else
        last =mid-1;
    }
    cout<<ans<<endl;
}
return 0;
}
