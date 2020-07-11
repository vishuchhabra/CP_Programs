#include<bits/stdc++.h>
using namespace std;
void print_string(string str1)
{
    string str=str1+".";
    vector<string>temp;
    int last =0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='.')
        {
            int siz = i-last;
            string arr = str.substr(last,siz);
            temp.push_back(arr);
            last=i+1;
        }

    }
    int p=temp.size()-1;
    for( ;p>0;p--)
        cout<<temp[p]<<".";
        cout<<temp[0]<<endl;
}
int main()
{

    int cases;
    string str;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>str;
        print_string(str);
    }
    return 0;
}
