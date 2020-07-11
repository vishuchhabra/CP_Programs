#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(!a)
        return b;
    return gcd(b%a,a);
}
int main()
{

    int a,b;
    cin>>a>>b;
    cout<<"gcd:"<<gcd(a,b)<<endl;
    return 0;
}
