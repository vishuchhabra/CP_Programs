#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>>temp(4,vector<int>(4,0));
    int val;
     for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        temp[i][j]=rand();


    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        cout<<temp[i][j]<<" ";
        cout<<endl;
}
}
