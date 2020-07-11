#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void tower_of_h(long long n ,int from ,int dest ,int help)
{
    if(n==1)
    {
        cout<<"Move "<<from <<" to "<<dest<<endl;
        return;
    }
    tower_of_h(n-1,from,help,dest);
    cout<<"Move "<<from <<" to "<<dest<<endl;
    tower_of_h(n-1,help,dest,from);

}
int main()
{

    long long n;
    cin>>n;
    int f=1,h=3,d=2;
    tower_of_h(n,f,d,h);
    return 0;
}
