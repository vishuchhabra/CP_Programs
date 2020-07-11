#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int number_ret(int n)
{
    vector<int>temp{1,2,3,4,5};
    if(n<=temp.size())
        return temp[n-1];
    int  h =6;
    while(temp.size()<n)
    {
//        if(find(temp.begin(),temp.end(),(float )h/2)!=temp.end())
//            temp.push_back(h);
//        else if(find(temp.begin(),temp.end(),(float )h/3)!=temp.end())
//            temp.push_back(h);
//        else if(find(temp.begin(),temp.end(),(float )h/5)!=temp.end())
//            temp.push_back(h);
        if((h%2)==0)
        {
          if(find(temp.begin(),temp.end(),h/2)!=temp.end())
                temp.push_back(h);
        }
        else if((h%3)==0)
        {
           if(find(temp.begin(),temp.end(),h/3)!=temp.end())
                temp.push_back(h);
        }
        else if((h%5)==0)
        {
           if(find(temp.begin(),temp.end(),h/5)!=temp.end())
                temp.push_back(h);
        }
        h++;
    }

    return temp[n-1];
}
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n;
        cin>>n;
        cout<<number_ret(n)<<endl;
    }
    return 0;
}
