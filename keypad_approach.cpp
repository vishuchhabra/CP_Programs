#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int keypad_app(int n,string arr[])
{
    string val[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(n==0)
    {
      arr[0]="";
      return 1;
    }
    int value = n%10;
    n/=10;
    int  check = keypad_app(n,arr);

        int p=0;
        for(int i=0;i<check;i++)
        {
            for(int j=1;j<val[value].length();j++)
            {
              arr[check+p] = val[value][j]+arr[i];
              p++;
            }
        }
        for(int i=0;i<check;i++)
        {

            arr[i]=arr[i]+val[value][0];
        }
        return check*val[value].length();

 }
int main()
{
    int n;
    cin>>n;
    string  arr[10000];
    int time = keypad_app(n,arr);
    cout<<time<<endl;
    for(int i=0;i<time+3;i++)
    cout<<arr[i]<<endl;

    return 0;
}
