#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int print_ans(string str)
{
    int arr[26]={0};
    for(auto i: str)
        arr[(int)i-(int)'a']++;
    vector<int>temp;
    for(auto i:arr)
        if(i)
        temp.push_back(i);
    int check =0;
    sort(temp.begin(),temp.end());
    int last =temp[0],flag=0;
    for(int i=1;i<temp.size();i++)
    {
        if(temp[i]!=last)
        flag =1;
    }
    if(!flag)
    return 1;
    int maxi = *max_element(temp.begin(),temp.end());
    int mini =*min_element(temp.begin(),temp.end());
    if((maxi-mini)>1)
    return 0;
    else
    {
        int c1 = count(temp.begin(),temp.end(),maxi);
        int c2 = count(temp.begin(),temp.end(),mini);
        if(c1==1  || c2==1 )
        return 1;
        else
        return 0;
    }

}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        string str;
        cin>>str;
        cout<<print_ans(str)<<endl;
    }
    return 0;
}
