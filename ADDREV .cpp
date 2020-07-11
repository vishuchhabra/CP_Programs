#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int cases;
	cin>>cases;
    while(cases--)
    {
        int m,n;
        cin>>m>>n;
        int res1=0,res2=0;
        while(m)
        {
            res1=(res1*10)+(m%10);
            m/=10;

        }
        while(n)
        {
            res2=(res2*10)+(n%10);
            n/=10;

        }
        res1+=res2;
        int f=0;
        while(res1)
        {
           f=(f*10)+(res1%10);
           res1/=10;

        }
        cout<<f<<endl;
    }
    return 0;
}
