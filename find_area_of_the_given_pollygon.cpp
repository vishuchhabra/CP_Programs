#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class point
{
public :
    double x,y;
};
class coordinate
{
public:
    point *arr;
    coordinate(int n)
    {

        arr = new point[n];
    }
};
double area(coordinate temp ,int n)
{
    double res =0;
    for(int i=1;i<n-1;i++)
    {
        double x1= temp.arr[i].x -temp.arr[0].x;
        double y1 =temp.arr[i].y -temp.arr[0].y;
        double x2= temp.arr[i+1].x -temp.arr[0].x;
        double y2 =temp.arr[i+1].y -temp.arr[0].y;
        res += (x1*y2 )-(x2*y1);
    }
    return abs(res/2);

}
int main()
{
    int n;
    cout<<"number of coordinates:";
    cin>>n;
    coordinate temp(n);
    cout<<"Enter points:"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>temp.arr[i].x;
       cin>>temp.arr[i].y;
    }
    cout<<area(temp,n)<<endl;
    return 0;
}
