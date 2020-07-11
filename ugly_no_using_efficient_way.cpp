#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_nth_ugly(int n)
{
    int arr[n];
    arr[0]=1;
    int i2=0,i3=0,i5=0;
    int next2=2,next3=3,next5=5;
    for(int i=1;i<n;i++)
    {
        arr[i]=min(next2,min(next3,next5));
        if(arr[i]==next2)
        {
           i2++;
           next2 =arr[i2]*2;
        }
        if(arr[i]==next3)
        {

            i3++;
            next3 =arr[i3]*3;
        }
        if(arr[i]==next5)
        {

            i5++;
            next5 =arr[i5]*5;
        }
    }
   return arr[n-1];
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        cout<<print_nth_ugly( n)<<endl;
    }
    return 0;
}
