#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool  check_e(string first,string second)
{
   sort(first.begin(),first.end());
   sort(second.begin(),second.end());
   if(first==second)
        return true;
   return false;
}
int main()
{
    string first,second;
    cin>>first>>second;
    if(first.size()!=second.size())
        cout<<"NO"<<endl;
    else if(first==second)
        cout<<"YES"<<endl;
    else
    {   //odd cases
        if(first.size()%2==0)
        {
           int m1 = first.size()/2;
           string f1 = first.substr(0,m1);
           string f2 = second.substr(0,m1);
           string s1 = first.substr(m1,m1);
           string s2 =second.substr(m1,m1);
           bool res1 = (check_e(f1,s1)&&check_e(f2,s2))||(check_e(f1,s2)&&check_e(f2,s1));
           if(res1)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;

        }
        else
        {
            int m2 = first.size()/2;
//            if(first[m2]!=second[m2])
//                cout<<"NO"<<endl;
//            else
//            {
               string s3,s4,f3,f4;
               f3= first.substr(0,m2);
               f4 = second.substr(0,m2);
               s3 =first.substr(m2+1,m2);
               s4 =second.substr(m2+1,m2);
               bool res1 = (check_e(f3,s3)&&check_e(f4,s4))||(check_e(f3,s4)&&check_e(f4,s3));
              if(res1)
              cout<<"YES"<<endl;
              else
              cout<<"NO"<<endl;


//            }

        }


    }
    return 0;
}
