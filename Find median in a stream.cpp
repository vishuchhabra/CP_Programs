#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    vector<int>temp;
	int cases,val;
	cin>>cases;
	while(cases--)
	{
	    cin>>val;
	    auto upper =upper_bound(temp.begin(),temp.end(),val);
	    vector<int>t(temp.begin(),upper);
	    t.push_back(val);
        t.insert(t.end(),upper,temp.end());
        temp =t;
	    if(temp.size()%2==1)
	    {
	        int pos1 = (temp.size())/2;
	        cout<<temp[(temp.size())/2]<<endl;
	    }
	    else
	    {
	        int m = temp.size()/2;
	        cout<<(temp[m]+temp[m-1])/2<<endl;
	    }
	}
	return 0;
}
