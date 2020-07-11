#include<iostream>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	while(cases--)
	{
	    int flag=0;
	    string first,second;
	    cin>>first>>second;
	    int i=0;
	    int j=0;
	    for(;i<first.length();i++)
	    {
	        for(;j<second.length();j++)
	        {
	            if(first[i]==second[j] && i==first.length()-1)
	            {
	                flag =1;
	            }
	            if(first[i]==second[j])
	            {
	               break;
	            }
	        }
	    }
	    if(flag)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
