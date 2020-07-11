#include <bits/stdc++.h>
using namespace std;
int  cout_divisor(int n)
{
    vector<int> res;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(!(n%i))
        {

            if(n/i ==i)
              res.push_back(i);
            else{
                res.push_back(i);
                res.push_back(n/i);
            }
        }
    }
return accumulate(res.begin(),res.end(),0);
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int sum  = cout_divisor(n);
        if(sum< (2*n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}



