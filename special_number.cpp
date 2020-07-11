#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print_n(int n)
{
    vector<int>arr;
    for(int i=0;i<6;i++)
        arr.push_back(i);
    for(int i=0;i<n;i++)
       for(int j=0;j<6;j++)
            if(arr[i]*10!=0)
              arr.push_back(arr[i]*10 + j);
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
        cout<<print_n(n)<<endl;

    }

}
