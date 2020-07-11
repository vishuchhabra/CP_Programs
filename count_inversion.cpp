#include<iostream>
using namespace std;
int  merging(int arr[],int l,int m,int h)
{
    int siz = h-l+1;
    int temp[siz];
    int mid =(l+h)/2;
    int i=l,j=mid+1;
    int k=0,coun=0;
    while(i<=mid && j<=h)
    {

        if(arr[i]>arr[j])
        {
            temp[k]= arr[j];
            j++;
            coun= coun + mid -i+1;

        }
        else
        {

            temp[k]= arr[i];
            i++;
        }
        k++;
    }
     while(i<=mid)
     {
         temp[k]=arr[i];
         i++;
         k++;

     }
     while(j<=h)
     {

         temp[k]= arr[j];
         j++;
         k++;
     }
    for(int i=0;i<siz;i++)
        arr[l+i]= temp[i];
        return coun;

}
 int  merge_sort(int arr[],int l,int h)
{
    int inv= 0;

    if(l<h)
    {
        int mid =  l + (h-l)/2;
       int p= merge_sort(arr,l,mid);
       int q= merge_sort(arr,mid+1,h);
       int r= merging(arr,l,mid,h);
       inv = p+q+r;

    }
    return inv;
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
   cout<<merge_sort(arr,0,n-1)<<endl;
    return 0;
}
