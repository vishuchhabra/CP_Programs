#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	while(cases--)
	{
	    int n,val;
	    cin>>n;
	    vector<int>arr;
	    for(int i=0;i<n;i++)
	    {
	        cin>>val;
	        arr.push_back(val);
	    }
        sort(arr.begin(),arr.end());
        int cost=0;
	    while(arr.size()>1)
	    {
	        int val =arr[0]+arr[1];
	        cost+=val;

	        vector<int>temp(arr.begin()+2,upper_bound(arr.begin(),arr.end(),val));
	        temp.push_back(val);
	        temp.insert(temp.end(),upper_bound(arr.begin(),arr.end(),val),arr.end());
	        arr=temp;
        }
        cout<<cost<<endl;
	}
	return 0;
}
