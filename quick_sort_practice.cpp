#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
//taking pivot as a last element
int parting(int arr[],int l,int h)
{

    int p= h;
    int i=l-1,j=h;

    while(i<j)
    {

        do
        i++;
        while(arr[p]>arr[i]);
        do
        j--;
        while(arr[p]<arr[j]);
        if(i<j)
        swap(arr[i],arr[j]);
   }
   swap(arr[i],arr[p]);
   return i;
}

void quick_sort(int arr[],int l,int h)
{

    if(l<h)
    {

        int j = parting(arr,l,h);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,h);
    }
}
int main()
{
    int n;
    cout<<"size:";
    cin>>n;
    int arr[n];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quick_sort(arr,0,n-1);
    cout<<"Sorted:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
