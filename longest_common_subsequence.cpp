#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> return_max(vector<int> arr,int n)
{
    vector<int>output(n);
    output[0]=1;
    for(int i=1;i<n;i++)
    {
        output[i]=1;
        for(int j=i-1;j>=0;j--)
        {

            if(arr[j]>arr[i])
                continue;
            int pos = output[j]+1;
            if(pos>output[i])
                output[i]=pos;
        }
    }
    return output;
}
int return_common(vector<int>first,vector<int>second)
{
    vector<int> max1 =return_max(first,first.size());
    vector<int> max2 = return_max(second,second.size());
    int siz = max((*max_element(max1.begin(),max1.end())),(*max_element(max2.begin(),max2.end())));
    int arr[siz+1]={0};
    for(int i=0;i<max1.size();i++)
    arr[max1[i]]=1;
    for(int j=0;j<max2.size();j++)
        arr[max2[j]]++;
    for(int i=siz;i>=0;i--)
        if(arr[i]>=2)
        return i;

    return 0;
}
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {

        int m,n;
        cin>>m>>n;
        string str;
        cin>>str;
        vector<int> first(m),second(n);
        for(int i=0;i<m;i++)
         first[i] = (int)str[i];
        cin>>str;
        for(int i=0;i<n;i++)
            second[i]=(int)str[i];
        cout<<return_common(first,second)<<endl;

    }
    return 0;
}
