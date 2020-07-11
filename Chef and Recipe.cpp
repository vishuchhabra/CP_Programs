#include <iostream>
#include <bits/stdc++.h>
#define fast  ios_base ::sync_with_stdio(false); cin.tie(NULL)
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
        int arr[n];

        cin>>arr[0];
        int last = arr[0];
        unordered_map<int,int> mp;
        mp[last]++;
        for(int i=1;i<n;i++)
        {
            cin>>arr[i];
            if(last!=-1){
            if(arr[i]==last)
            {
                mp[arr[i]]++;
            }
            else
            {

                if(mp[arr[i]]!=0)
                {
                    last =-1;
                }
                else
                {
                    mp[arr[i]]++;
                    last = arr[i];
                }
            }
            }

        }
        if(last==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int temp[1001]={0};
        for(auto i: mp)
        {
            temp[i.second]++;

        }
        for(int i=0;i<=1000;i++)
        {

            if(temp[i]>1)
            {
                cout<<"NO"<<endl;
                last=-5;
                break;
            }
        }
        if(last!=-5)
            cout<<"YES"<<endl;

    }
    return 0;
}
