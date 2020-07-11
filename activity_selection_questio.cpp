#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct num
{
  int start,finish;
};
bool compare(num t1 , num t2)
{

    return t1.finish < t2.finish;
}
int print_max(vector<num> arr)
{
    sort(arr.begin(),arr.end(),compare);
    int coun =1;
    int lf =arr[0].finish;
    for(int i=1;i<arr.size();i++)
    {

        if(arr[i].start >= lf)
        {

            coun++;
            lf= arr[i].finish;
        }
    }

    return coun;
}
int main()
 {
	int cases,val;
	cin>>cases;
	while(cases--)
	{
	    int n;
	    cin>>n;
	    vector<num>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>val;
	        arr[i].start = val;
        }
	    for(int i=0;i<n;i++)
	    {
	        cin>>val;
	        arr[i].finish = val;
        }
        cout<<print_max(arr)<<endl;
    }
	return 0;
}
