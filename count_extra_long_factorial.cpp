#include<iostream>
using namespace std;
int multiply(int ele,int arr[],int siz)
{
    int carry=0;
    for(int i=0;i<siz;i++)
    {

        int temp=(arr[i]*ele)+carry;
        arr[i] = temp % 10;
        carry = temp/10;
    }
    while(carry)
    {
        arr[siz] = (carry%10);
        carry/=10;
        siz++;
    }
    return siz;
}
void fact(int n)
{
    int arr[10000];
    arr[0]=1;
    int arr_size=1;
    for(int i=2;i<=n;i++)
    arr_size = multiply(i,arr,arr_size);
    for(int i=arr_size-1;i>=0;i--)
        cout<<arr[i];
    return;
}
int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}
