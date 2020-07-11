#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    int  arr[100001]={0};
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=100000;i++)
    {
         int t=arr[i-1]+arr[i-2];
        t=t%mod;
        arr[i]=t;
    }
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}

