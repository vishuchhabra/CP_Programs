#include <sstream>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> temp;
    string s="";

    for(int i=0;i< str.length();i++)
    {
        if(str[i] == ',' || i==str.length()-1)
        {   if(i==str.length()-1)
             s+=str[i];
            stringstream r;
           int h;
           r<<s;
           r>>h;
           temp.push_back(h);
           s = "";
           cout<<"first"<<endl;
        }
        else
        {
            s+=str[i];
        }
    }
    return temp;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
