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
void multi_inverse(int a,int m)
{
    ex temp = extended_gcd(a,m);
    if(temp.gcd!=1)
        cout<<"-1"<<endl;
    else
        cout<<(temp.x%m +m)%m<<endl;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
    int a,m;
    cin>>a>>m;
    multi_inverse(a,m);
    }
    return 0;
}

