#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;

        int arr[n+1];
        arr[0]=-1;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        int mis,rep;
        cout<<endl;
        int temp[n+1]={0};
        for(int i=0;i<n+1;i++)
            temp[arr[i]]++;
        for(int i=1;i<n+1;i++)
        {

            if(temp[i]==2)
                rep=i;
            if(temp[i]==0)
                mis =i;
        }

        cout<<rep<<" "<<mis<<endl;

    }
    return 0;

}
