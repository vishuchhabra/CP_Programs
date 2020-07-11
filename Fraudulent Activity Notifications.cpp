#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
//for indication
int dp[201]={0};
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=0;i<d;i++)
    dp[arr[i]]++;
int r_point =0;
int odd = (d%2)?1:0;
int noti =0;
for(int i=d;i<n;i++)
{
    //check median
    int coun=0,left_m=-1,right_m=-1;
    for(int j=0;j<=200;j++)
    {

        coun+= dp[j];
        if(coun>=(d/2)&& left_m==-1)
            left_m = j;
        if(coun>=((d/2)+1) && right_m==-1)
            right_m = j;
    }
    //calculate notifications
    if(odd && arr[i]>= (2*right_m))
        noti++;
    double g = ((double)(left_m + right_m)/(double)2)*(double)2;

    if(!odd && arr[i]>=g)
        noti++;

    //add element
    dp[arr[i]]++;

    //remove element
    dp[arr[r_point]]--;
    r_point++;

}
cout<<noti<<endl;
return 0;
}
