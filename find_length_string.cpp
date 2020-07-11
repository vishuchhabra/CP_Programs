#include<iostream>
using namespace std;
int find_length(char c[]);
void remove_x(char c[])
{
    if(c[0]=='\0')
        return ;

    if(c[0]!='x')
        remove_x(c+1);
    else
    {
        int i=1;
        for(;c[i]!='\0';i++)
        {

            c[i-1]=c[i];
        }
        c[i-1] =c[i];
        remove_x(c);

    }

}
int main()
{
    char c[100];
    cin>>c;
    cout<<find_length(c)<<endl;
    remove_x(c);
    cout<<c<<endl;
    cout<<find_length(c)<<endl;
    return 0;
}
int find_length(char c[])
{
    if(c[0]=='\0')
        return 0;
    return 1+find_length(c+1);

}
