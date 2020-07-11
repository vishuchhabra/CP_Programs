#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long print_rev_bit( long long int n)
{
    n = n| 0x00000000;
    long long temp=0;
    for(int i=1;i<=32;i++)
    {
        temp=temp<<1;
        int digit = n&1;
        n=n>>1;
        temp= temp|digit;


    }
    return temp;

}
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {

        long long  n;
        cin>>n;
        cout<<print_rev_bit(n)<<endl;

    }
    return 0;
}
