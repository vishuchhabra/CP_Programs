#include<bits/stdc++.h>
using namespace std;
class sorting
{
public:
    int first,second;
};
bool run(sorting x ,sorting y)
{
    return (x.first<y.first);
}
int main()
{

    sorting arr[]={{78,5},{2,3},{45,3},{1,46},{-34,4}};
    sort(arr,arr+5,run);
    for(auto i: arr)
        cout<<i.first<< " "<<i.second<<endl;
    return 0;
}
