#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime[10000001];
void SieveOfEratosthenes()
{

    for(int i=0;i<10000001;i++)
    prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    for (int p=2; p*p<=10000000; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=10000000; i += p)
                prime[i] = false;
        }
    }
}
bool checkPrime(int num){
    return prime[num];
}

int main() {
	//code

    SieveOfEratosthenes();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;

        int cn=0,pn=0;

        for(int i=l;i<=r;i++){
            if(checkPrime(i) && i>1){

               pn++;
            }else{
                if(i>1){
                    cn++;
                }

            }
        }

        cout<<(cn-pn)<<endl;

    }
   return 0;
	}
