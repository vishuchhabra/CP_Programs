#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;

	while(cases--)
	{
	    string first,second;
	    cin>>first>>second;
	    int arr1[26]={0},arr2[26]={0};
	    for(int i=0;i<first.length();i++)
          arr1[(int)first[i]-(int)'a']++;
        for(int j=0;j<second.length();j++)
            arr2[(int)second[j]-(int)'a']++;

        for(int i=0;i<26;i++)
            if(arr1[i]-arr2[i])
            {  char c= i+'a';
                cout<<c;
            }
        cout<<endl;
	}
	return 0;
}
