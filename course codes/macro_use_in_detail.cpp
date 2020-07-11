#include <iostream>
#include <bits/stdc++.h>
#define max 100
#define  increment(x) x++

#define multiply(a,b) (a)*(b)
//for merging the integers
#define merge(a,b) a##b

//for concatenate the string
#define merges(a,b) a b

//syntax for #define is following as
//#define token value
//it should always follow this one .

//getting token pass as a  string

#define get(a) #a //returning the string
using namespace std;
int main()
{
    cout<<max<<endl;
    int n =34;
    increment(n);

    cout<<n<<endl;
    cout<<multiply(2+3,3)<<endl;

    cout<<merge(4,35)<<endl;
    cout<<merges("This is vishu chhabra","chhabra")<<endl;
    //for getting into  the string
    cout<<get(34)<<endl;

    //for getting type we have
    cout<<typeid(3456).name()<<endl; //telling about int , float , char //basically

    return 0;
}
