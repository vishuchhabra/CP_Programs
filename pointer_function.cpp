#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void change(int  *p)
{
    (*p )++;
}
int main()
{

    int i=10;
    change(&i);
    cout<<i<<endl;

    vector<int> arr;
    cout<<arr.size()<<endl;
    return 0;
}
