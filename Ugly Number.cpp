#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int check(int num,int n)
{

    while(num%n==0)
        num /= n;
    return num;
}
int no_count(int n)
{
   if(n==1)
    return 1;
   int co=1;
   int num;
   int temp =2;
   while(1)
   {
       num = check(temp,2);
       num =check(num,3);
       num =check(num,5);
       if(num==1)
       co++;
       if(co==n)
       return temp;
            temp++;
  }

}
int main()
{
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
	    int n;
	    cin>>n;
	    cout<<no_count(n)<<endl;
    }
	return 0;
}
