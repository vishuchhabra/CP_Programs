//recursive method to resolve this problem //important method
#include<iostream>
#include<bits/stdc++.h>
//#define mod  1000000007
using namespace std;
long  count_balenced_tree(int h)
{

    if(h==0 ||h==1)
        return 1;
     long mod = pow(10,9)+7;
     long  x =count_balenced_tree(h-1);
     x=x%mod;
     long  res1 = (long)x*x;
     long   y =count_balenced_tree(h-2);
     y=y%10;
     long  res2 = (long)x*y*2;
     long  ans1 = (long)(res1%mod);
     long  ans2 = (long )(res2%mod);
     long  ans  = (ans1+ans2)%mod;
    return ans;
}

int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int h;
        cin>>h;
        cout<<count_balenced_tree(h)<<endl;

    }

    return 0;
}
