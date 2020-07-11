#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) ; cin.tie(NULL)
#define vi vector<int>
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,val=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        vi  first(arr, arr+n);
        vi  second(arr,arr+n);
        for(int i=1;i<n;i++)
           first[i]+= first[i-1];
        for(int i=n-2;i>=0;i--)
            second[i]+= second[i+1];
        for(int i=0;i<n;i++)
        {
            int leftsum ,rightsum;
            if(!i){
                leftsum=0;
                rightsum = second[n-2-i];
            }
            else if(i==n-1){
                rightsum=0;
                leftsum = first[i-1];
            }
            else{
                leftsum = first[i-1];
                rightsum = second[i+1];
            }
            if(leftsum == rightsum)
            {
                val =1;
                cout<<"YES"<<endl;
                continue;
            }

        }
        if(!val)
        cout<<"NO"<<endl;
    }
    return 0;
}
