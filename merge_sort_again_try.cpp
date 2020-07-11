#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merging(int arr[],int left ,int right,int mid)
{
    int temp[right-left+1];
    int l = left;
    int r = mid +1;
    int i=0;
    while(l<=mid && r<=right)
    {

        if(arr[l]<arr[r])
        {

            temp[i]=arr[l];
            l++;
        }
        else
        {
            temp[i]=arr[r];
            r++;

        }
        i++;
    }
    while(l<=mid)
    {
        temp[i]=arr[l];
        l++;
        i++;
    }
    while(r<=right)
    {
        temp[i]=arr[r];
        r++;
        i++;
    }
    for(int j=0;j<right-left+1;j++)
        arr[left+j]=temp[j];

}
void merge_sort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid =(left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merging(arr,left,right,mid);
    }

}
int main()
{

    cout<<"Size:"<<endl;
    int siz;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
        cin>>arr[i];
    merge_sort(arr,0,siz-1);
    cout<<"After sort:"<<endl;
    for(int i=0;i<siz;i++)
        cout<<arr[i]<<" ";
    return 0;
}
