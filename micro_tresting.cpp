#include <iostream>
//more about macro
#define o(str)  #str  //using # str we can make string in actual
using namespace std;

int main()
{
    cout<<(unsigned)!((int)0)<<endl;
    cout<<o(this is vishu)<<endl;//using macro
    return 0;
}

