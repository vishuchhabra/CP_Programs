#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int print_result(int n ,int k)
{

    if(n==1)
        return 1;
    return (print_result(n-1,k)+ (k-1))%n +1;
}
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        cin>>n>>k;
        cout<<print_result(n,k)<<endl;
    }
    return 0;
}
