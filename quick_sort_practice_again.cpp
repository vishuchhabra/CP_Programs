#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int sorting_quick(int arr[],int l,int h)
{
   int i=l,j=h+1;
   int p = arr[l];
   while(i<j)
   {
       do
        i++;
       while(arr[i]<p);
       do
        j--;
       while(arr[j]>p);
       if(i<j)
        swap(arr[i],arr[j]);
   }
    swap(arr[j],arr[l]);
    return j;

}
void quick_sort(int arr[],int l,int h)
{

    if(l<h)
    {

        int point = sorting_quick(arr,l,h);
        quick_sort(arr,l,point-1);
        quick_sort(arr,point+1,h);
    }
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
