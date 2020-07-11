    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int cases;
        cin>>cases;
        while(cases--)
        {
            set<vector<int>> res;
            int n,sum,val;
            cin>>n>>sum;
            vector<int> arr;
            for(int i=0;i<n;i++)
            {
                cin>>val;
                arr.push_back(val);
            }
            sort(arr.begin(),arr.end());
            unordered_map<int,vector<pair<int,int>>>mp;
            for(int i=0;i<n-1;i++)
            {

                for(int j=i+1;j<n;j++)
                {

                    mp[arr[i]+arr[j]].push_back({i,j});
                }
            }
            for(int i=0;i<n-1;i++)
            {

                for(int j=i+1;j<n;j++)
                {

                    int h  =sum - arr[i]-arr[j];
                    if(mp.find(h)!=mp.end())
                    {

                        vector<pair<int,int>>t=mp[h];
                        for(auto p:t){
                        if(p.first != i &&  p.second!=j && p.first!=j && p.second!=i)
                        {
                            vector<int> k ={arr[i],arr[j],arr[p.first],arr[p.second]};
                            sort(k.begin(),k.end());
                            res.insert(k);
                        }
                        }
                    }
                }
            }
        if(!res.size())
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(auto i: res)
        {

            for(auto  j:i)
                cout<<j<<" ";
            cout<<"$";
        }
        cout<<endl;
        }
        return 0;
    }
