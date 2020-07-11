#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="this";
    transform(str.begin(),str.end(),str.begin(),::toupper);//converting all the whole string into the uppercases
    transform(str.begin(),str.end(),str.begin(),::tolower);//for the lower cases

    //convert the specific character into uppercase
    str[0]= toupper(str[0]);//same we can use for tolower  function


    //cout<<str<<endl;


    //convert string into the number

    string arr="2345";
    int n = stoi(arr);
    cout<<n<<endl;

    //converting number into the string
    int num=566;
    arr=to_string(num);
    cout<<arr<<endl;

    //also we can do these all using string stream//important to note down


    return 0;
}

