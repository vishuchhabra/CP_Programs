#include<iostream>
using namespace std;
int main()
{
    char c ='3';
    int n  = c;
    cout<<n<<endl;
    cout<<(char)n<<endl;

    c ='A';
    n= (int)c;
    cout<<n<<endl;
    cout<<(char)n<<endl;//important concept about the ascii vale and try to remember it whole life;
    cout<< (char)(3 + 48)<<endl;cout<<(char) (3+ '0')<<endl;//two different way to convert the char into int
    cout<<(int)'3'-48<<endl;cout<<(int)'3'-'0'<<endl;
    return 0;
}
