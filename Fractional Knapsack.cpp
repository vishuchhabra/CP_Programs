#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class  element
{
public:
    int val,wt;
    double f;
};
bool  compare(element t1,element t2)
{
    return  t1.f > t2.f ;
}
double ret_fun(vector<element>arr,int w)
{
    sort(arr.begin(),arr.end(),compare);
    int i=0;
    double res=0.0;
    while(w>0 && i <arr.size())
    {
       if(arr[i].wt<=w)
       {
           w -= arr[i].wt;
           res += arr[i].val;
       }
       else
       {

           res+= (double)((double)(w*arr[i].val)/arr[i].wt);
           w=0;
       }
       i++;

    }
    return res;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        vector<element>arr;
        int n,w;
        cin>>n>>w;
        int v,wts;
        for(int i=0;i<n;i++)
        {
            cin>>v>>wts;
            element temp;
            temp.val = v;
            temp.wt =wts;
            double  fr =(double)v/(double)wts;
            temp.f =fr;
            arr.push_back(temp);
        }
        cout<<fixed<<setprecision(2)<<ret_fun(arr,w)<<endl;

    }
    return 0;
}
