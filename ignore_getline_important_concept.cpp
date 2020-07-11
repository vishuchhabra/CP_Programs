//cin.ignore() function is used to ignore the input buffer ,uses it is compulsory whenever we came from the
// taking input from the cin statement;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str,str1;
    int n;

//    //first try     //no need to use ignore in this case
//    getline(cin,str);
//    getline(cin,str1);
//    cin>>n;
//    cout<<str<<endl<<str1<<endl<<n<<endl;

     //case with using ignore function


     cin>>n;
     cin.ignore();//use only then ,when we are coming from the cin statement to  clear the input buffer.
     //otherwise no need
     getline(cin,str);
     getline(cin,str1);
     cout<<str<<endl<<str1<<endl<<n<<endl; //correct way to use the cin>>ignore function.

     return 0;
}
