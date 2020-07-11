#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void countSort(char arr[])
{
    int t=0;
    int dp[26]={0};
    for(int i=0;arr[i]!='\0';i++)
    {
        int temp = (int)arr[i];
        dp[temp-97]++;
    }

    for(int i=0;i<26;i++)
    {
        for(int j=0;j<dp[i];j++){
            arr[t]=char(i+97);
            t++;
        }
    }

}
int main()
{

    int n;
    scanf("%i",&n);
    char dp[n+1];
    scanf("%s",&dp);
    countSort(dp);
    printf("%s",dp);
    return 0;
}
