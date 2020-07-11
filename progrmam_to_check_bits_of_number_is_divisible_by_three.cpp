#include<iostream>
using namespace std;
int print_div(string str)
{
    int c1=0,c2=0;
    for(int i=0;i<str.length();i++)
    {
        if(!(i%2) && str[i]=='1')
        c1++;
        if((i%2) && str[i]=='1')
        c2++;
    }
    if(!((c1-c2)%3))
        return 1;
    else
        return 0;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
      string str;
      cin>>str;
      cout<<print_div(str)<<endl;
    }
    return 0;
}
