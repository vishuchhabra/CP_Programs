#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char print_rep(string str)
{
    unordered_map<char,int>mp;
    for(auto i:str)
    mp[i]++;
    for(auto j: str)
    if(mp[j]>1)
    return j;
    return '1';

}
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
	    string str;
	    cin>>str;
	    if(print_rep(str)=='1')
	    cout<<"-1"<<endl;
	    else
	    cout<<print_rep(str)<<endl;

	}
	return 0;
}
