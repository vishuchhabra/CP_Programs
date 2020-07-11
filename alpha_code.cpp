#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int return_decode(vector<int>arr,int siz,int temp[])
{
    if(siz==0 ||siz==1)
        return 1;
    if(temp[siz]>0)
        return temp[siz];
    int output  =return_decode(arr,siz-1,temp);
    if(arr[siz-1]+arr[siz-2]*10<=26)
        output +=return_decode(arr,siz-2,temp);
    temp[siz]=output;
    return output;

}
int return_decode2(vector<int>input,int siz)
{

    int temp[siz+1]={0};
    temp[0]=1;temp[1]=1;
    for(int i=2;i<=siz;i++)
    {
        if(input[i-1]>0)
        {
        temp[i] = temp[i-1];
        }
        if(input[i-2]==1 ||(input[i-2]==2) &&  (input[i-1]<7))
        {
            temp[i] += temp[i-2];
        }
    }
    return temp[siz];
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
    int val,siz;
    cin>>siz;
    string str;
    cin>>str;
    vector<int>arr;
    for(int i=0;i<siz;i++)
    {
        val = (int)str[i]-(int)'0';
        arr.push_back(val);
    }
    if(arr[0]==0 || (arr[siz-1]==0 && arr[siz-2]==0))
    {
        cout<<"0"<<endl;
        continue;
    }
    cout<<return_decode2(arr,siz)<<endl;
    }
    return 0;
}
