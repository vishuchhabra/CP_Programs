#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int ,greater<int>>t;
    int arr []={5,1,2,3,4,2,2,1};
    for(int i=0;i<8;i++)
        t.insert(arr[i]);
    set<int>::iterator it;
    for(it=t.begin();it!=t.end();it++)
    {
        cout<<*it<<"\t";

    }
    it--;
    //cout<<endl<<*(t.begin())<<endl<<*(it)<<endl;
    auto s = t.find(58);
    if(s==t.end())
        cout<<"This is complete match"<<endl;
    return 0;
}
