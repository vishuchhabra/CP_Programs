#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_number(int arr[],int n)
{

    if(n==0)
    {
        cout<<"0"<<endl;
        return;
    }
    int rem,i=0;
    while(n)
    {

        arr[i++]=n%6;
        n/=6;

    }
    for(int j=i-1;j>=0;j--)
        cout<<arr[j];
    cout<<endl;

}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int arr[10000]={0};
        int n;
        cin>>n;
        print_number(arr,n-1);

    }
    return 0;
}
