#include <bits/stdc++.h>
#define  minh priority_queue<int,vector<int>,greater<int>>
#define fast  ios_base::sync_with_stdio(false) ; cin.tie(NULL)
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases; //defining the cases
    while(cases--)
    {

        int n,k;
        cin>>n>>k;
        minh heap;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        //sorting the array
        sort(arr,arr+n);

        //find the right most element
        int index=-1;
        for(int i=n-1;i>=0;i--){
        if(arr[i]<k){
            index =i;
            break;
        }
        }

        //defining indexing elements
        int right = index ;
        int left = 0;
        int counts = 0;

        //make pair by adding
        while(left< right)
        {
            if((arr[left]+arr[right])>=k)
            {
                arr[right]+= arr[left];
                arr[left]=-1;
                counts++;
                right --;
            }
            left++;
        }
        //inserting into the heap
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=-1)
                heap.push(arr[i]);
        }

        //condition for counting the steps

        while(heap.size()>0 && heap.top()<k)
        {
            if(heap.size()>1)
            {

                int first = heap.top();
                heap.pop();
                int second  = heap.top();
                heap.pop();
                heap.push(first+second);
                counts++;
            }
            else
            {
            counts = -1;
            break;
            }

        }
        cout<<counts<<endl;

    }
    return 0;
}
