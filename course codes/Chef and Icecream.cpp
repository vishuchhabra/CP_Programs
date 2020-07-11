#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
using namespace std;
int main()
{
    fast;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(arr[0]>5)
        {
           cout<<"NO"<<endl;
           continue;
        }
        int flag =0;
        int c5=1,c10=0,c15=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==5)
            {
                c5++;

            }
            else if (arr[i]==10)
            {

                c10++;
                if(!c5)
                {
                    flag =1;
                    cout<<"NO"<<endl;
                    break;

                }
                else
                {
                    c5--;
                }
            }
            else
            {
                c15++;
                if(c10)
                {

                    c10--;
                }
                else if (c5>=2)

                {
                    c5--;
                    c5--;
                }
                else
                {
                     flag =1;
                    cout<<"NO"<<endl;
                    break;

                }
            }
        }
        if(!flag)
            cout<<"YES"<<endl;

    }
    return 0;
}
