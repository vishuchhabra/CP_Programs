#include<bits/stdc++.h>
using namespace std;
int count_4_pairs(vector<int>arr,int n)
{
    unordered_map<int,vector<int>> temp;
    for(auto j:arr)
        temp[j%4].push_back(1);
    int cot =0;//for counting purpose
    cot +=  ((temp[0].size())*(temp[0].size()-1))/2;
    cot += ((temp[2].size())*(temp[2].size()-1))/2;
    cot += ((temp[1].size())*(temp[3].size()));
    return cot;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int siz,val;
        cin>>siz;
        vector<int>arr;
        for(int i=0;i<siz;i++)
        {
            cin>>val;
            arr.push_back(val);
        }
        cout<<count_4_pairs(arr,siz)<<endl;

    }
    return 0;
}
