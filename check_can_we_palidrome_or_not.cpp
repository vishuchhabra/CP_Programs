#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	while(cases--)
	{
	    string str;
	    cin>>str;
	    int count ;
	    if(!(str.size()%2))
	    count =0;
	    else
	    count=1;
	    unordered_map<char,int>mp;
	    for(int i=0;i<str.length();i++)
	    {
	        mp[str[i]]++;
	    }
	    int temp=0;
	    unordered_map<char,int>::iterator it;
	    for(it = mp.begin();it!=mp.end();it++)
	    {
	       if(((*it).second)%2)
	       temp++;
	    }
	    if(temp>count)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	}
	return 0;
}
