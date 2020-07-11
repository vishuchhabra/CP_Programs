#include<iostream>
using namespace std;
int main()
{
    int x =7;
    int y = (x & (~(1<<0)));//set the nth bit
    cout<<y<<endl;
    cout<<x<<endl;
    return 0;

}
