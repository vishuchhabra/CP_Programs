#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {

	    //string str=" ";
        //cout<<(int)str[0]<<endl;  //important to remember that ascii value of space is 32 .
        int cases;
        cin>>cases;
        cin.ignore();
        for(int i=0;i<cases;i++)
        {
            int count =0;
        string str;
	    getline(cin,str);
	    for(int i=0;i<str.length();i++)
	    {
	        char c;
	        if((int)str[i]==32)
	        {
            cout<<" ";
	        continue;
	        }
            c= str[i];
	        if(((((c=='a' || c=='e' )|| c=='i' )|| c=='o' )|| c=='u'))
	        {
	        cout<<str[i];
	        count++;
	        }
	        if(((((c=='A' || c=='E' )|| c== 'I') || c=='O') || c=='U'))
	        {
	        cout<<str[i];
	        count++;
	        }
	    }
	    if(!count)
	    cout<<"No Vowel";
	    cout<<endl;
        }

	return 0;
}
