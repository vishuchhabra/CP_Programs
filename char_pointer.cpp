#include<iostream>
using namespace std;
int main()
{

    //char a[]={"abcde"};

   // cout<<&a[0]<<endl;
    //cout<<a<<endl;
    //cout<<&a<<endl;//whole three will print until it get null character
    char c='t';
    cout<<c<<endl;
    char * p = &c;
    cout<<p;//it will print until it get the null character
    return 0;
}
