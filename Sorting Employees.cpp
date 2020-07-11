#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct num
{
    int sal;
    string name;
};
bool compare(num f ,num s)
{

    if(f.sal!=s.sal)
        return f.sal<s.sal;
    else
        return f.name<s.name;
}
int main()
 {
	int cases;
	cin>>cases;
	while(cases--)
    {
        vector<num>temp;
        int n;
        num p;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>p.name>>p.sal;
           temp.push_back(p);
        }
        sort(temp.begin(),temp.end(),compare);
        for(auto i:temp)
            cout<<i.name<<" "<<i.sal<<" ";
        cout<<endl;

    }
	return 0;
}
