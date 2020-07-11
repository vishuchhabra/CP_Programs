#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        vector<int> res;
        int base=1;
        for(int i=1;i<n;i++)
        {
            if((arr[i]-arr[i-1])<=2)
               base++;
            else
            {
              res.push_back(base);
              base=1;
            }
        }
        res.push_back(base);
        cout<<*min_element(res.begin(),res.end())<<" "<<*max_element(res.begin(),res.end())<<endl;
    }
    return 0;
}

