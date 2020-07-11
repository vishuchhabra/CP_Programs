#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void closet_pair(vector<int>first,vector<int>second,int sum)
{
    int f=0,s=(second.size()-1);
    int diff = INT_MAX;
    int left=-1,right=-1;
    while((f<(first.size())) && (s>=0))
    {
        if((abs(sum-(first[f]+second[s])))<diff)
        {

            left = first[f];
            right = second[s];
            diff = abs(sum - (first[f]+second[s]));
        }
        if((first[f]+second[s])>sum)
            s--;
        else
            f++;
    }
    cout<<left<<" "<<right<<endl;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int m,n;
        cin>>m>>n;
        vector<int> first,second;
        int val;
        for(int i=0;i<m;i++)
        {
            cin>>val;
            first.push_back(val);

        }
        for(int i=0;i<n;i++)
        {

            cin>>val;
            second.push_back(val);
        }
        int sum;
        cin>>sum;
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        closet_pair(first,second,sum);

    }

    return 0;
}
