#include <bits/stdc++.h>
#define fast  ios_base:: sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
using namespace std;
//using linear search
int closest_index(vi  arr ,int left , int right ,  int key)
{
    int diff = INT_MAX;
    int index =-1;
    for(int i=left;i<=right ;i++)
    {

        if((arr[i]-key)<diff && arr[i]>key)
        {
            index =  i;
            diff = arr[i]-key;
        }

    }
    return index;
}
//using binary search
int closest_index1(vi arr , int left  , int right ,  int key)
{
    int index = -1;
    while(left <= right)
    {

        int mid =  left  + (right- left)/2;
        if(arr[mid]<=key)
        {

            right = mid -1;
        }
        else
        {
            left = mid +1;
            if(index==-1 || arr[index]>arr[mid])
                index = mid ;
        }
    }
    return index;
}

//main program
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--){
    int n,val;
    cin>>n;
    vi arr;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    int last =n-2;
    while(last>=0 && arr[last]>=arr[last+1] )
        last--;
    if(last<0)
    {
        for(int j=n-1;j>=0;j--)
            cout<<arr[j]<<" ";
        cout<<endl;
        continue;
    }


    int key = arr[last];
    int c_id = closest_index1(arr,last+1,n-1,key);
    swap(arr[c_id],arr[last]);
    reverse(arr.begin()+last+1,arr.end());
    for(auto  i: arr)
        cout<<i<<" ";
    cout<<endl;
    }
    return 0;
}
