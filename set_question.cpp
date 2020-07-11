#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int siz =0;
    set<int> s1;
    for(int i=0;i<n;i++)
    {
        int key,val;
        cin>>key>>val;
        if(key==1)
        {
            s1.insert(val);
        }
        else if(key ==2)
        {
        s1.erase(val);
        }
        else
        {
            if(s1.find(val)!=s1.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}



