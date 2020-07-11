#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //for taking the fast input
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>arr(n,1);//initialize with 1 whole array

    //for first test case
    for(int i=1;i<n;i++)
       if(str[i]==str[i-1])
            arr[i]+= arr[i-1];

    for(int i=n-2;i>=0;i--)
        if(str[i]==str[i+1])
          arr[i]= arr[i+1];
    //count substring for first test cases
    int count_sub =(arr[0]*(arr[0]+1))/2;
    for(int i=1;i<n;i++)
    {
        if(str[i-1]==str[i])
            continue;
        count_sub+=  (arr[i]*(arr[i]+1))/2;
    }
    //count the sub string for second cases when element is in middle
    for(int i=1;i<n-1;i++)
    {
        if(str[i]!=str[i-1] && str[i-1]==str[i+1])
            count_sub += min(arr[i-1],arr[i+1]);
    }

    //printing the result
    cout<<count_sub<<endl;
    return 0;
}
