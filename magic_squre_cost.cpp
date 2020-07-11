#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>dp={{8,3,4,1,5,9,6,7,2},{6,7,2,1,5,9,8,3,4},{4,3,8,9,5,1,2,7,6},
     {2,7,6,9,5,1,4,3,8},{8,1,6,3,5,7,4,9,2},{2,9,4,7,5,3,6,1,8},{6,1,8,7,5,3,2,9,4},{4,9,2,3,5,7,8,1,6}};

    vector<int> arr;
    int val;
    for(int i=0;i<9;i++)
    {

        cin>>val;
        arr.push_back(val);
    }
    int cost =INT_MAX;
    int temp=0;
    for(int i=0;i<8;i++)
    {


        for(int j=0;j<9;j++)
        {
            temp+=abs(dp[i][j]-arr[j]);

        }
        cost = min(cost,temp);

        temp=0;
    }
    cout<<cost<<endl;
    return 0;
}
