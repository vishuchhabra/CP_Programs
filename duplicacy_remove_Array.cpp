#include<bits/stdc++.h>
#define vr vector
#define bg begin
#define en end
using namespace std;
int main()
{
    vr<int> t;
    set <int> temp;
    int siz;
    cin>>siz;
    cout<<"Elements:";
    int y;
    for(int i=0;i<siz;i++)
    {
        cin>>y;
        temp.insert(y);
    }
    cout<<"After removing :"<<endl;
    for(int i:temp)
        cout<<i<< " ";
    return 0;
}
