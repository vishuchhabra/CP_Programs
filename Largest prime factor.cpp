#include<bits/stdc++.h>
#include<iostream>
typedef long long l;
using namespace std;
l largest_prime(l n)
{
    l maxP =-1;
    while(n%2==0)
    {
       n/=2;
       maxP=2;
    }
    for(l i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {

            n/=i;
            maxP =i;
        }
    }
    if(n>2)
      maxP = n;
    return maxP;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {

        l  n;
        cin>>n;
        cout<<largest_prime(n)<<endl;
    }
    return 0;
}
