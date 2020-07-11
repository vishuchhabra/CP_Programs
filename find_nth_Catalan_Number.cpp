#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace  boost::multiprecision;
using namespace std;
cpp_int print_c(int n,vector<cpp_int>&arr)
{
    if(n<=1)
        return 1;
    if(arr[n] != -1)
        return arr[n];
    cpp_int  res=0;
    for(int i=0;i<n;i++)
        res+= print_c(i,arr)*print_c(n-1-i,arr);
    arr[n]=res;
    return res;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int  n;
        cin>>n;
        vector<cpp_int> arr(n+1,-1);
        arr[0]=1;arr[1]=1;
        cout<<print_c(n,arr)<<endl;
    }
    return 0;
}
