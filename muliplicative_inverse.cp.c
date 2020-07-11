#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class ex
{
public:
    int gcd,x,y;
};
//suppose the a greater than b
ex extended_gcd(int a,int b)
{
    //base case
    ex temp;
    if(b==0)
    {
        temp.y=0;
        temp.x =1;
        temp.gcd =a;
        return temp;
    }
    //main code
    ex t = extended_gcd(b,a%b);
    ex res;
    res.gcd =t.gcd;
    res.x = t.y;
    res.y = t.x -((a/b)*t.y);
    return res;

}
int main()
{
    int m,n;
    cin>>m>>n;
    ex = extended_gcd(m,n);
    cout<<ex.gcd<< " "<<ex.x<< " "<<ex.y<<endl;
    return 0;
}
