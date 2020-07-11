
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
bool check(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
} //no need of this function
void print_seive(int n)
{
    vector<bool>arr(n+1,true);
    arr[0]=false;arr[1]=false;
    for(int i=2;i<=sqrt(n);i++) //also i*i<=n //both are the same//
    {
        if(arr[i])
        {

               int j=i,solve = i*j;
               while(solve<=n)
               {
                arr[solve]=false;
                j++;
                solve = i*j;
               }


        }
    }
    for(int i=0;i<=n;i++)
        if(arr[i])
        cout<<i<<" ";
    cout<<endl;

}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {

        int n;
        cin>>n;
        print_seive(n);
    }
    return 0;
}
