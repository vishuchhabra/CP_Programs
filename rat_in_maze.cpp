#include<iostream>
using namespace std;
void df();
int main()
{
    df();
    return 0;
}
void tf()
{

    cout<<"this is another update last"<<endl;
}
void hf()
{
     tf();
    cout<<"this is another update"<<endl;
}
void df()
{
  hf();
    cout<<"this is another function"<<endl;
}
