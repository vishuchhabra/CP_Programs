#include <bits/stdc++.h>
#define fast  ios_base :: sync_with_stdio(false);
#define vc vector<char>
using namespace std;
int binary_s(vc arr, int l, int r , int key)
{
    int index = -1;
    while(l<=r)
    {
        int mid = l +  (r-l)/2;
        if(arr[mid]<=key)
            r = mid -1;
        else
        {
            l = mid +1;
            if(index ==-1 || arr[index]>= arr[l])
                index = mid;
        }
    }
    return index;
}
void print_next(vc arr)
{
 int len = arr.size();
 int i= len -2;
 while(i >= 0 && arr[i] >= arr[i+1])
    i--;

 if(i<0)
 {
   cout<<"no answer"<<endl;
   return;
 }
 int index = binary_s(arr,i+1,arr.size()-1,arr[i]);
 swap(arr[i],arr[index]);
 reverse(arr.begin()+i+1, arr.end());
 for(auto i: arr)
    cout<<i;
 cout<<endl;
}
int main()
{
    fast;
    int n;
    cin>>n;
    while(n--)
    {
        vc arr;
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
           arr.push_back(str[i]);
        print_next(arr);
    }
    return 0;
}
