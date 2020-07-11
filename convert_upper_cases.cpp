#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	cin.ignore();
	while(cases--)
	{

	    string s;
	    getline(cin,s);
	    int n = (int)s[0];
	    if(n>=97 && n<=122)
	    {
	        n-=32;
	        char t =(char)n;
            s[0]=t;
	    }
	    for(int i=1;i<s.size();i++)
	    {
	        if(s[i-1]==' ')
	        {
	            n = (int)s[i];
	           if(n>=97 && n<=122)
	           {
	           n-=32;
	           s[i]=(char)n;
	           }

	        }
	    }
	   for(auto  i:s)
	   cout<<i;
	   cout<<endl;
	}
	return 0;
}
