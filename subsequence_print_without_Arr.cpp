#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subseq_print(string input ,string output)
{
    if(input.empty())
    {

        cout<<output<<endl;
        return;
    }
    string pass = input.substr(1);
    subseq_print(pass,output);
    subseq_print(pass,output + input[0]);

}
int main()
{
    string input;
    cin>>input;
    string output="";
    subseq_print(input,output);
    return 0;
}

