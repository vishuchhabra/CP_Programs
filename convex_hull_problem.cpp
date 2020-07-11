#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct  point
{
    int x,y;
};

bool  tochange(point p,point q,point r)
{
    int x1 = q.x -p.x;
    int y1  =q.y-p.y;
    int x2 = r.x -q.x;
    int y2 = r.y -q.y;
    int res= (y2*x1)- (y1*x2);
    if(res >0)
        return true;
    else
        return false;
}
bool compare(point t1,point t2)
{
    if(t1.x== t2.x)
    return t1.y<t2.y;
    return t1.x<t2.x;
}
vector<point> print_hull(point arr[],int siz)
{
    vector<point>hull;
    int left =0;
    for(int i=1;i<siz;i++)

        if(arr[i].x < arr[left].x)
        left = i;
    int p=left;
    do
    {
        hull.push_back(arr[p]);
        int q= (p+1)%siz;
        for(int i=0;i<siz;i++)
        {
            if(tochange(arr[p],arr[q],arr[i]))
            {
              q=i;
            }

        }
        p=q;
    }
    while(p!=left);
   return hull;
}
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int n;
        cin>>n;

        point arr[n];
        for(int i=0;i<n;i++)
        {
          cin>>arr[i].x>>arr[i].y;

        }
        int co =1;
        sort(arr ,arr+n,compare);
        int temp=0;
        for(int i=1;i<n;i++)
        {

            if(arr[i].x==arr[temp].x && arr[i].y == arr[temp].y)
            continue;
            else
            {
                temp =i;
                co++;
            }
        }

        if(co<=2)
        {

            cout<<"-1"<<endl;
            continue;
        }
        vector<point> hull =print_hull(arr,n);
        sort(hull.begin(),hull.end(),compare);
        vector<point>pr={hull[0]};
        point last=hull[0];
        for(int i=1;i<hull.size();i++)
        {

            if(last.x == hull[i].x && last.y ==hull[i].y)
                continue;
            else
            {

                last =hull[i];
                pr.push_back(hull[i]);
            }
        }
        for(int i=0;i<pr.size()-1;i++)
            cout<<pr[i].x<<" "<<pr[i].y<<", ";
        cout<<pr[pr.size()-1].x<<" "<<pr[pr.size()-1].y<<endl;

    }

    return 0;
}
