#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int k,n;
        cin>>k>>n;
        int arr[n];
        int maxi =INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
            mini = min(mini,arr[i]);
        }
        if(maxi-mini<k)
        {
            cout<<maxi-mini<<endl;
            continue;
        }
        int ave = (maxi+mini)/2;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<ave)
                arr[i]+=k;
            if(arr[i]>ave)
                arr[i]-=k;

        }
        maxi = *max_element(arr,arr+n);
        mini = *min_element(arr,arr+n);
        cout<<maxi-mini<<endl;

    }
}
