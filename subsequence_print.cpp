#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
string * sub_seq(string str,string arr[])
{
    if(str.empty())
    {

        arr[0] = "";
        return arr;
    }
    string str1=str.substr(1);
    sub_seq(str1,arr);
    int len =pow(2,str.length())/2;
    for(int i=0;i<len;i++)
    {
        arr[len+i]=str[0]+arr[i];

    }
    return arr;
}
int main()
{
    string str;
    cin>>str;
    int len = pow(2,str.length());
    string arr[len];
    string * print_val =sub_seq(str,arr);
    for(int i=0;i<len;i++)
        cout<<arr[i]<<endl;
    return 0;
}
