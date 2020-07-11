#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_set(int n)
{

    int coun =0;
    while(n)
    {
        int temp = n& 1;
        n=n>>1;
        if(temp)
            coun++;

    }
    return coun;
}
int main()
{

    int  dp[10001];
    for(int i=1;i<=10000;i++)
    {
       dp[i]= count_set(i);
    }
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int flag =1;
        for(int i=1;i<n;i++)
        {
            if(dp[i]+i==n)
            {

                cout<<"0"<<endl;
                flag =0;
                break;
            }

        }
        if(flag)
            cout<<"1"<<endl;
    }
    return 0;

}
