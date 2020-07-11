#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sub_seq(string str, string arr[])
{

    if(str.empty())
    {

        arr[0]="";
        return 1;
    }
    string h = str.substr(1);
    int time = sub_seq(h,arr);
    for(int i=0;i<time;i++)
        arr[time+i]=arr[i]+str[0];
    return 2*time;
}
int main()
{

    string str;
    cin>>str;
    string arr[1000];
    int n =sub_seq(str,arr);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
