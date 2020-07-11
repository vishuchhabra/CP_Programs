#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class element
{

public:
    int start,finish,profit;
};
bool  compare(element t1,element t2)
{

    return t1.finish < t2.finish;
}
int print_max(element arr[],int siz)
{
    sort(arr,arr+siz,compare);
    int dp[siz];
    dp[0]= arr[0].profit;
    for(int i=1;i<siz;i++)
    {
        int excluded =dp[i-1];
        int c =-1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j].finish<=arr[i].start)
            {
                c = j;
                break;
            }
        }
        int included =arr[i].profit;
        if(c !=-1)
        {
           included += dp[c];
        }
        dp[i] =max(included,excluded);

    }
    return dp[siz-1];
}
int main()
{
    element arr[]={ {1, 2, 50}, {3, 5, 20}, {2, 100, 200},{6, 19, 100}};
    cout<<print_max(arr,4)<<endl;
    return 0;
}
