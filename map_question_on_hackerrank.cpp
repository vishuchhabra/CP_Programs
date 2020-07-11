#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    while(n--)
    {
        int key;
        string val;
        cin>>key>>val;
        if(key==1)
        {
            int score;
            cin>>score;
            mp[val]+=score;
        }
        else if (key==2)
        {
          mp[val]=0;
        }
        else
        {
            cout<<mp[val]<<endl;
        }


    }
    return 0;
}

