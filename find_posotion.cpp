#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    //cout<<log(10)<<endl;//by default always base is one //important
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n;
        cin>>n;
        int  k = log2(n);
        cout<<pow(2,k)<<endl;
    }
    return 0;
}
