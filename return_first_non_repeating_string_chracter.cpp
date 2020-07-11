#include<bits/stdc++.h>
using namespace std;
char return_fun(string str)
{
    unordered_map<char,int>temp;
    for(auto i:str)
        temp[i]++;
    for(auto j: str)
        if(temp[j]==1)
        return j;
    return '1';
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {

        int siz;
        cin>>siz;
        string str;
        cin>>str;
        char temp = return_fun(str);
        if(temp=='1')
            cout<<"-1"<<endl;
        else
        cout<<temp<<endl;
    }
    return 0;
}
