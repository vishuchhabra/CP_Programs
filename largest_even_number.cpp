#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	while(cases--)
	{
	    int dp[10]={0};
	    string str;
	    cin>>str;
	    for(auto i: str){
            string h="";
            h+=i;
	        int t =stoi(h);
	        dp[t]++;
	    }

	    int even=-1;
	    for(int i=0;i<10;i+=2)
	        if(dp[i])
	        {
	          dp[i]--;
	          even=i;
	          break;
	        }

	    for(int i=9;i>=0;i--)
	    {
	       while(dp[i])
	       {
	           cout<<i;
	           dp[i]--;
	       }
	    }
	    if(even!=-1)
	    cout<<even<<endl;
	    else
            cout<<endl;


	}
	return 0;
}
