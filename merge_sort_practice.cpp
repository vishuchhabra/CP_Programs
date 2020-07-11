#include<iostream>
using namespace std;

void merging(int arr[], int l ,int m ,int r)
{

    int s1 = m-l+1;
    int s2 = r-m;

    int t1[s1];
    int t2[s2];
    int i,j,k;
    for(i=0;i<s1;i++)
        t1[i]= arr[l+i];
    for(j=0;j<s2;j++)
        t2[j]=arr[m+1+j];

    i=0;j=0;k=l;
    while(i<s1 && j<s2)
    {

        if(t1[i]>t2[j])
        {

            arr[k]= t2[j];
            j++;
        }
        else
        {

            arr[k]= t1[i];
            i++;
        }
        k++;
    }
    while(i<s1)
    {

        arr[k]= t1[i];
        i++;
        k++;
    }


}

void merge_sort(int arr[],int l,int r)
{

    if(l<r)
    {

        int mid = l+ (r-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merging(arr,l,mid,r);
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
    merge_sort(arr,0,n-1);
    cout<<"Sorted:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
