#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_sub(int *arr,int n)
{
    int *output = new int [n];
    output[0]=1;
    for(int i=1;i<n;i++)
    {
        output[i]=1;
        for(int j=i-1;j>=0;j--)
        {
           if(arr[j] >= arr[i])
            continue;

           int pos = output[j]+1;
           if(pos>output[i])
            output[i]=pos;
        }
    }
    int maxi =-1;
    for(int i=0;i<n;i++)
        if(output[i]>maxi)
        maxi = output[i];
    delete [] output;
    return maxi;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<print_sub(arr,n)<<endl;
        delete [] arr;
    }
    return 0;
}
