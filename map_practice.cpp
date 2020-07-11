#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<int,int> temp;
    for(int i=0;i<5;i++)
    {

        int m,n;
        cin>>m>>n;
        temp.insert({m,n});

    }
    for(auto i:temp)
        cout<<i.first<< " "<<i.second<<endl;
    //cout<<"size : "<<temp.size()<<endl;
    int key;
    cout<<"key:";
    cin>>key;
    cout<<(temp.upper_bound(key))->first<<endl<<(temp.lower_bound(key))->first<<endl;
    return 0;
}
