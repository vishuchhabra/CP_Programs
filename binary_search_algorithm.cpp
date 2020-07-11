#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_sear(int arr[],int n,int ele)
{
    int left=0,right=n-1;
    while(left<=right)
    {

        int mid = (left+right)/2;
        if(ele==arr[mid])
            return mid;
        else if(arr[mid]>ele)
            right =mid-1;
        else
            left = mid+1;
    }
      return -1;
}
int main()
{

    int n;
    cin>>n;
    cout<<"elements:";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"after sort:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    int sear;
    cout<<endl<<"element search:";
    cin>>sear;
    cout<<binary_sear(arr,n,sear)<<endl;
}
