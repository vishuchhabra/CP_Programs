#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int m,n;
        cin>>m>>n;
        int first[m],second[n];
        for(int i=0;i<m;i++)
            cin>>first[i];
        for(int i=0;i<n;i++)
            cin>>second[i];
        int res1 = *max_element(first,first+m);
        int res2 = *max_element(second,second+n);
        if(res1<res2)
            cout<<"MechaGodzilla"<<endl;
        else
            cout<<"Godzilla"<<endl;
    }
    return 0;
}
