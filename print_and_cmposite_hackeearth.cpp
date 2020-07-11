#include <iostream>
#include <bits/stdc++.h>
#define limit 1000005
using namespace std;
//initialize the global array
vector<bool> dp(limit, true);
void print_result(int arr[], int n)
{
    for(int i=0;i<n;i++)
        if(dp[arr[i]])
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=n-1;i>=0;i--)
        if(!dp[arr[i]])
        cout<<arr[i]<<" ";
    cout<<endl;

}
void make_seive()
{
    dp[0]= false;dp[1]= false;
    for(int i=2;i<=sqrt(limit);i++)
    {
        if(dp[i])
        {
           for(int j=i*i;j<limit;j+=i)
           {
            dp[j]= false;

           }
        }
    }
}

int main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    //execute the function for prime
    make_seive();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    print_result(arr,n);
    return 0;
}
