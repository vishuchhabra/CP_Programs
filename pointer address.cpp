#include<iostream>
using namespace std;
int main()
{

    int i=10;
    cout<<sizeof(i)<<endl;
    int * p= &i;
    cout<<sizeof(p)<<endl;
    return 0;
}
