#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //important about the null character
    //char sr1[4];
    //for(int i=0;i<3;i++)
      //  cin>>sr1[i];
    //for(int i=0;sr1[i]!='\0';i++)
    //cout<<sr1[i];

    //important about the string
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
        cout<<str[i];


    return 0;
}

