#include <vector>
#include <bits/stdc++.h>
using namespace std;

int get( string &s,int i,int j,vector<vector<int> >&dp){
    int temp;
    if(i>j)return 0;
    if(i==j) return 1;
    if(dp[i][j]) return dp[i][j];
    if(s[i]==s[j])
     temp = 2+get(s,i+1,j-1,dp);
    else temp = max(get(s,i+1,j,dp),get(s,i,j-1,dp));
    dp[i][j]=temp;
    return dp[i][j];
}

int main() {
	int t;
	cin>>t;
	string s;
	getline(cin,s);
	while(t--){
	    s.clear();
	    getline(cin,s);
	    //cout<<s<<endl;
	    int n=s.length();
	    vector<vector<int> >dp(n,vector<int>(n));
	    cout<<get(s,0,s.length()-1,dp)<<endl;
	}
	return 0;
}
