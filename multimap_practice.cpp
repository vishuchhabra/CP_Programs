#include<bits/stdc++.h>
using namespace std;
int main()
{

    multimap <int,int> temp;
    for(int i=0;i<5;i++)
    {
        int m,n;
        cin>>m>>n;
        temp.insert({m,n});
    }
    for(auto i : temp)
    {

        cout<<i.first<< " "<<i.second<<endl;
    }
    return 0;
}
