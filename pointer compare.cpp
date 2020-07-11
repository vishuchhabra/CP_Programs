#include<iostream>
using namespace std;
int main()
{

    int i= 10;
    int * p = &i;
    int *q = p;
    q++;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<(p>q)<<endl;
    cout<<(p<q)<<endl;
}

