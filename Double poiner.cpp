#include<iostream>
using namespace std;
void inc1(int **p)  //this will never work
{

    p =p+1;
}
void inc2(int **p)  //this will work
{

    *p = *p+1;
}
void inc3(int **p)  //this will work
{

    (**p) = (**p) +1;
}
int main()
{

    int i =10;
    int *p = &i;
    int **q = & p;

    inc3(q);
    (**q) ++;
    cout<<**q<<endl;


}
