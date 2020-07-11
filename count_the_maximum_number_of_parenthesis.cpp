#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int count_p(string s)
{
    int result =0;
    stack<int> temp;
    temp.push(-1);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            temp.push(i);
        else
        {
            temp.pop();
            if(!temp.empty())
            {
                result = max(result,(i-temp.top()));

            }
            else
                temp.push(i);

        }
    }
    return result;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        string s;
        cin>>s;
        cout<<count_p(s)<<endl;
    }
    return 0;
}
