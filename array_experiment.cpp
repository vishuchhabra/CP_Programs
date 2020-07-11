#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={23,34,2,45,453,3};
    //sort(arr,arr+4);//in case of array we can not use begin as well as end ,only we can
    //use arr ,arr+n;
//    int i=0;
//    for(int p=0;p<6;p++)// pre increment
//        cout<<arr[++i]<<endl;


    int i=0;
    for(int p=0;p<6;p++)// post  increment
        cout<<arr[i++]<<" ";                       //new syntax for array //very useful
    return 0;
    return 0;

}
