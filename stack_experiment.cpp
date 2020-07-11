#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> s1;
    for(int i=0;i<5;i++)
        s1.push_front(i);

    for(auto i:  s1) //this for does not work on the stack and queue
        cout<<i<<" ";

 return 0;
}
