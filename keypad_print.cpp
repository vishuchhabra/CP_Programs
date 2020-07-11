#include<iostream>
using namespace std;
int keypad_app(int n,string output)
{
    int sum =0;
    string val[] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(!n || n==1)
    {
        cout<<output<<endl;
        return 1;
    }
    int hint = n%10;
    n/=10;
    for(int i=0;i<val[hint].length();i++)
    sum =sum+ keypad_app(n,output+val[hint][i]);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    string output="";
    cout<<keypad_app(n,output);
    return 0;
}
