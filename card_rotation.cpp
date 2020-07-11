#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

int cases;
cin>>cases;
while(cases--)
{
    int n;
    cin>>n;
    deque<int> arr;
    arr.push_back(n);
    for(int i=n-1;i>=1;i--)
    {
        arr.push_front(i);
        for(int j=1;j<=i;j++)
        {
            int val =arr.back();
            arr.pop_back();
            arr.push_front(val);

        }
    }
    for(auto i  : arr)
        cout<<i<<" ";
    cout<<endl;
}
return 0;
}
