#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int sub_seq(string str,string arr[])
{
    if(str.empty())
    {

        arr[0] = "";
        return 1;
    }
    string str1=str.substr(1);
    int len = sub_seq(str1,arr);
    for(int i=0;i<len;i++)
    {
        arr[len+i]=str[0]+arr[i];

    }

     return len*2;

}
int main()
{
    string str;
    cin>>str;
    int len = pow(2,str.length());
    string arr[len];
    int print_val =sub_seq(str,arr);
    for(int i=0;i<print_val;i++)
        cout<<arr[i]<<endl;
    return 0;
}
