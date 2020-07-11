//check whether array  is sorted or not
#include<iostream>
using namespace std;
int check1(int arr[],int siz)
{
    if(siz==0 || siz ==1)
        return 1;
    else
    {

        if(!(check1(arr+1,siz-1)))
          return 0;
        else
        {
        if(arr[0]<arr[1])
        return 1;
        return 0;
        }
    }


}
int check(int arr[], int siz)
{

    if(siz==0 || siz ==1)
        return 1;
    else
    {
        if(arr[0]<arr[1])
            return (check(arr+1,siz-1));
        return 0;

    }
}
int main()
{

    int arr[]={23,48,79,89};
    int siz= sizeof(arr)/sizeof(arr[0]);
    cout<<check1(arr,siz);
    return 0;
}
