#include <bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(false);cin.tie()
#define mod 1000000007
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        vector<int> capA;
        int cap=0;
        //counting the capacity
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                cap+=arr[i][j];
            }
            capA.push_back(cap);
            cap=0;
        }
        //counting the number of balls
        vector<int> typeA;
        int type=0;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                type+= arr[j][i];

            }
            typeA.push_back(type);
            type=0;
        }
        sort(capA.begin(),capA.end());
        sort(typeA.begin(),typeA.end());

        if(capA==typeA)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;



    }
    return 0;
}
