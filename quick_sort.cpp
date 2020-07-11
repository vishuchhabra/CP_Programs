#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int parting(int arr[],int l, int h)
{
    int pivot =l;
    int i=l,j=h+1;
    while(i<j)
    {
        do
        i++;
        while(arr[i]<arr[pivot]);
        do
        j--;
        while(arr[j]>arr[pivot]);
        if(i<j)
        swap(arr[i],arr[j]);

    }

    swap(arr[pivot],arr[j]);
    return j;


}

void quick_sort(int arr[],int l ,int r)
{

    if(l<r)
    {

        int j = parting(arr,l ,r);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,r);

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

