#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false) ; cin.tie(NULL)
#define vi vector<int>
#define input(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,val;
        cin>>n;
        int first[n], second[n];
        input(first,n);
        input(second,n);
        long long x=0,y=0,we=0;
        for(int i=0;i<n;i++)
        {

            if(x==y && first[i]==second[i])
                we+=first[i];
            x+=first[i];
            y+=second[i];
        }
        cout<<we<<endl;
    }
}
