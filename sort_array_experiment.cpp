#include<bits/stdc++.h>
using namespace std;
bool comp(int i,int j)
{
    if(i!=j)
    return i>j;
    return i=j;
}
int main()
{

    int arr[]={1,77,44,77,77};
    int siz = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+siz,comp);
    for(auto i: arr)
        cout<<i<<" ";
    return 0;
}
