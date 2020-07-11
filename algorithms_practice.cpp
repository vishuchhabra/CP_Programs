#include<iostream>
#include<bits/stdc++.h>
#define v vector
using namespace std;
bool sequence(int x,int y)
{
return x>y;
}
int main()
{
    v<int>t;
    int n;
    cin>>n;
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        int n;
        cin>>n;
        t.push_back(n);
    }
    any_of(t.begin(),t.end(),[](int x)
           {

               return x<0;
           })?cout<<"Negative number is present"<<endl:cout<<"NO any"<<endl;

    sort(t.begin(),t.end(),sequence);
    cout<<"After sorting:";
    for(auto h:t)
    cout<<h<< " ";
    reverse(t.begin(),t.end());
    cout<<"\nafter Reverse:"<<endl;
    for(auto h:t)
    cout<<h<< " ";
    cout<<"max_element:"<<*max_element(t.begin(),t.end())<<endl;
    cout<<count(t.begin(),t.end(),24)<<endl;
    return 0;
}
