#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string str1, string str2)
{N
    for(int i=0;i<min(str1.size(),str2.size());i++)
    {

        if(str1[i]==str2[i])
            continue;
        return str1<str2;
    }
    return str1.size()<str2.size();
}
int main()
{

    string str[]={"GeeksforGeeks", "I", "from", "am"};
    sort(str,str+4,compare);
    for(auto i:str)
        cout<<i<<"  ";
    return 0;

}
