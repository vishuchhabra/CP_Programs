#include<iostream>
using namespace std;
void merging(int arr[], int l,int m,int h)
{
    int m1= m-l+1;
    int m2= h-m;
    int arr1[m1];
    int arr2[m2];
    int k =l;//initial index

    for(int i=0;i<m1;i++)
        arr1[i]= arr[l+i];
    for(int j=0;j<m2;j++)
        arr2[j]= arr[m+1+j];
    int p=0,q=0;

    while(p<m1 && q<m2)
    {

        if(arr1[p]<arr2[q])
        {
            arr[k]= arr1[p];
            p++;


        }
        else
        {

            arr[k]= arr2[q];
            q++;

        }
        k++;
    }
    while(p<m1)
    {

        arr[k]=arr1[p];
        p++;
        k++;
    }
    while(q<m2)
    {
        arr[k]=arr2[q];
        q++;
        k++;

    }

}

void merge_sort(int arr[],int l,int h)
{
    if(l<h)
    {

        int mid = (l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);

        merging(arr,l,mid,h);
    }

}
int main()
{

    int arr[]={23,55,2,45,2,454,1};
    merge_sort(arr,0,6);
    for(int i=0;i<7;i++)
    {
      cout<<arr[i]<<endl;
    }
    return 0;
}
