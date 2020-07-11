#include<iostream>
using namespace std;
int main()
 {
	int cases;
	cin>>cases;
	while(cases--)
	{
	    int arr[26]={0};
	    string str;
	    cin>>str;
	    for(int i=0;i<str.size();i++)
	    {
	        char c  =str[i];
	        int val = (int) c -'a';
	        arr[val]++;
	    }
	    for(int i=0;i<26;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
	    int check =(str.size()%2)?1:0;
	    cout<<check<<endl;
	    int temp=0;
	    for(int i=0;i<26;i++)
	    {
	        if(arr[i]%2)
	        temp++;
	    }
	    if(temp>check)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
