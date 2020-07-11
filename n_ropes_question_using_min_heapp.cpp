#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n,val;
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> mp;
        for(int i=0;i<n;i++)
        {

            cin>>val;
            mp.push(val);
        }
        long long cost=0;
        while(mp.size()>1)
        {
            long first = mp.top();
            mp.pop();
            long second = mp.top();
            mp.pop();
            long temp = first+second;
            cost+= temp;
            mp.push(first+second);

        }
        cout<<cost<<endl;
    }
    return 0;
}
