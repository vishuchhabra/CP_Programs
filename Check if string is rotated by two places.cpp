#include <bits/stdc++.h>
#define fast ios_base:: sync_with_stdio(false);  cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        string a,b;
        cin>>a>>b;
        string temp = b;

        //first rotation
        char c;
        c = *(temp.end()-1);
        temp.erase(temp.end()-1);
        temp = c+temp;
        c = *(temp.end()-1);
        temp.erase(temp.end()-1);
        temp = c+temp;

        //second rotation
        c = *(b.begin());
        b.erase(b.begin());
        b = b+c;
        c = *(b.begin());
        b.erase(b.begin());
        b = b+c;

        if(temp==a || b==a)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

    }
    return 0;
}
