#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<string,int>s1,pair<string,int>s2)
{
    return s1.second < s2.second;
}

string print_second(vector<string> vec)
{
    map<string,int>mp;
    for(auto i:vec)
      mp[i]++;
    pair<string,int> p[mp.size()];
    int pos=0;
    for(auto j : mp)
    {
       p[pos]=j  ;
       pos++;
    }
    sort(p,p+mp.size(),comp);
    if(mp.size()==1)
        return "-1";
    return p[mp.size()-2].first;

}
int main()
 {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
	    int n;
	    cin>>n;
	    string str;
	    vector<string> temp;
	    for(int i=0;i<n;i++)
	    {
	    cin>>str;
	    temp.push_back(str);
	    }
	    cout<<print_second(temp)<<endl;
	}
	return 0;
}
