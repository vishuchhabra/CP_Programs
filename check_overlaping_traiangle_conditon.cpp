#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int return_over()
{
    //there are only one condition should be true out of two condition for triangle do not overlap
    //1.one triangle should be on the left side of another
    //2.one triangle should be on the top  of another
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x2<x3 || x4<x1)
        return 0;
    if(y2>y3 || y4>y1)
        return 0;
    return 1;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cout<<return_over()<<endl;
    }
    return 0;
}
