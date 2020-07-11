#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>>mini;
    int n;
    cin>>n;
    int val;
    cin>>val;
    maxi.push(val);
    double med = val;
    cout<<setprecision(1)<<fixed<<med<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>val;
        if(maxi.size()>mini.size())
        {
            if(val>med)
            mini.push(val);
            else
            {

                mini.push(maxi.top());
                maxi.pop();
                maxi.push(val);
            }

            med = (double)(maxi.top()+mini.top())/(double)2;

        }
        else if(maxi.size()==mini.size())
        {
            if(val<med)
            {

                maxi.push(val);
                med = maxi.top();
            }
            else
            {

                mini.push(val);
                med = mini.top();
            }
        }
        else
        {
           if(val<med)
           {

               maxi.push(val);
           }
           else
           {
               maxi.push(mini.top());
               mini.pop();
               mini.push(val);
           }
            med = (double)(maxi.top()+mini.top())/(double)2;
        }

      cout<<setprecision(1)<<fixed<<med<<endl;

    }
    return 0;
}
