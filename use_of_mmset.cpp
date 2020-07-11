#include<bits/stdc++.h>
using namespace std;
int main()
{
    //memset is used only for the array and structure ,it can not be used with vector
    //for vector we have different function ie  fill(starting address,ending address,value);
    int n =5;
    int arr[5];
    for(auto i:arr)
        cout<<i<<"  ";
    cout<<endl;
    //by using memset we can assign only -1 or 0 no any integer can be assign with this function
    memset(arr,-1,sizeof(arr));
     for(auto i:arr)
        cout<<i<<"  ";
    cout<<endl;

    //memset on string is not valid ,it is only valid on character array
    char  str[4];
    memset(str,'t',sizeof(str));

    for(auto i:str)
        cout<<i<<"  ";
    cout<<endl;
    return 0;
}
