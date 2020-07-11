#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int flag=1;
    for(int i=1;i<n;i++)
    {
        arr[i]-=arr[i-1];
        if(arr[i]<0)
            {flag=0;
            break;
            }

    }
    if(flag && !arr[n-1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
