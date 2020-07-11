#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false) ; cin.tie(NULL)
#define vi vector<int>
using namespace std;
int main()
{

    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        vi arr;
        int n,val;
        for(int i=0;i<5;i++)
        {

            cin>>val;
            arr.push_back(val);
        }
        cin>>val;
        for(int i=0;i<5;i++)
            arr[i]= arr[i]*val;
        int sum = accumulate(arr.begin(),arr.end(),0);
        if(sum<=120)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
