#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class element
{
public:
    int start,finish,num;
};
bool  compare(element t1,element t2)
{

    return (t1.finish<t2.finish);
}
void print_met(vector<element>arr)
{
    sort(arr.begin(),arr.end(),compare);
    cout<<arr[0].num<<" ";
    int f = arr[0].finish;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i].start>=f)
        {
            cout<<arr[i].num<<" ";
            f =arr[i].finish;
        }
    }
    cout<<endl;
}
int main()
 {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
	    int n,val;
	    cin>>n;
	    vector<int>t1,t2;
	    for(int i=0;i<n;i++)
	    {
	        cin>>val;
	        t1.push_back(val);

	    }
	    for(int i=0;i<n;i++)
        {

            cin>>val;
	        t2.push_back(val);
        }
        vector<element>arr;
        for(int i=0;i<n;i++)
        {
            element temp;
            temp.start = t1[i];
            temp.finish = t2[i];
            temp.num = i+1;
            arr.push_back(temp);
        }
        print_met(arr);


	}
	return 0;
}

