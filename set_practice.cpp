#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<set>
#include<utility>
using namespace std;
int main()
{
//    pair    < int , char> myPair;
//    myPair.first=100;
//    myPair.second='g';
//
////    cout<<myPair.first<<myPair.second<<endl;
//    pair<int,string> This(34,"this is vishu chhabra");
//
//    cout<<endl<<This.first<<endl<<This.second<<endl;
//    pair <int ,string> h(This);
//    cout<<endl<<This.first<<endl<<This.second<<endl;
//     pair<string ,int> th;
//     pair<string ,int> yh;
//     cout<<th.first<<endl<<th.second<<endl<<yh.first<<endl<<yh.second<<endl;
//     return 0;
//      pair<int ,string> h;
//      h = make_pair(67,"This is vishu chhabra");
//      cout<<h.first<<endl<<h.second<<endl;
//      return 0;
//      pair<int ,int> pair1(7,1);
//      pair<int ,int> pair2(5,5);
//      cout<<(pair1==pair2)<<endl;//comparing the two pair in the c++
//      cout<<(pair1!=pair2)<<endl;//not equal operator to compare the two pairs
//      cout<<(pair1>pair2)<<endl;
//      pair<int ,int> g(34,5);
//      pair<int ,int> h;
//      h=g;

      pair<int ,int> g(34,5);
      pair<int ,int> h(90,53);
      g.swap(h);
      cout<<h.first<<endl<<h.second<<endl;

      return 0;
}
