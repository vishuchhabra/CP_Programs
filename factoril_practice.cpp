#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int multiply(int arr[],int pos,int ele)
{
    int carry=0;
    for(int i=0;i<=pos;i++)
    {
        int hint = (arr[i]*ele) +carry;
        arr[i]=hint%10;
        carry =hint/10;
    }
    while(carry)
    {
        pos++;
        arr[pos]=carry%10;
        carry/=10;

    }
    return pos;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"1"<<endl;
        continue;
    }
    int arr[100000];
    arr[0]=1;
    int pos=0;
    for(int i=1;i<=n;i++)
    {
        pos = multiply(arr,pos,i);
    }
    for(int i=pos;i>=0;i--)
        cout<<arr[i];
    cout<<endl;
    }
    return 0;

}
