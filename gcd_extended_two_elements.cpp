#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class triple
{
  public:
      int gcd,x,y;
};
triple gcd_extended(int a,int b)
{
    //base cases
    triple temp;
    if(b==0)
    {
        temp.gcd = a;
        temp.y= 0;
        temp.x =1;
        return temp;
    }
    triple t = gcd_extended(b,a%b);
    triple my;
    my.gcd = t.gcd;
    my.x = t.y;
    my.y = t.x - ((a/b)*t.y);
    return my;

}
int main()
{
  int a,b;
  cin>>a>>b;
  triple temp  = gcd_extended(a,b);
  cout<<"gcd:"<<temp.gcd<<endl<<"x:"<<temp.x<<endl<<"y:"<<temp.y<<endl;
  return 0;
}
