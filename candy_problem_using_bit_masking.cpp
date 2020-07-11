#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_bits(int n)
{
    int coun =0;
    while(n)
    {
        coun+= n& 1;
        n=n>>1;
    }
    return coun;
}
int main()
{
    int  p =3,candy = 3;
    int like[3][3]={{1,1,1},{1,0,1},{1,1,1}};
    //for indication we have dp  array
    int dp[(1<<3)]={0};//initialize the array with 0
    dp[(1<<3)-1]=1;
    for(int i= (1<<3)-2;i>=0;i--)
    {
        int setbit = count_bits(i);
        for(int j=0;j<3;j++)
        {
            if(like[setbit][j] && (!((1<<j)&i)))
                dp[i]+= dp[i | (1<<j)];
        }
    }
    cout<<dp[0]<<endl;
    return 0;
}
