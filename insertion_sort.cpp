#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//insertion sort it is one of the bast and non efficient way  of sorting.
void insertion_sort(int arr[],int siz)
{
    int comp=0;
    for(int i=1;i<siz;i++)
    {
       int temp=i-1;
       int j=i;
       while(temp>=0 && arr[temp]>arr[j])
       {
        swap(arr[temp],arr[j]);
        temp--;
        j--;
       }

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
    insertion_sort(arr,siz);
    cout<<"After sort:"<<endl;
    for(int i=0;i<siz;i++)
        cout<<arr[i]<<" ";
    return 0;
}
