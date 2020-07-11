#include<stdio.h>
#include<conio.h>
int arena(int start,int end)
{
    int i,j;
    int arr[7][3]=
    {

        {
            13,14,15
        },
        {
            12,-1,11
        },
        {
            9,-1,10
        },
        {
            8,-1,7
        },
        {
            5,-1,6
        },
        {

            4,-1,3
        },
        {

            0,1,2
        }
    };
for(i =0;i<7;i++)
    for( j=0;j<3;j++)
{

    if(arr[i][j]==start)
    {

        if(arr[i-1][j]==end && i-1!=-1)
            return 3;
        else if(arr[i+1][j]==end && i+1 !=7)
            return 4;
        else if(arr[i][j-1]==end && j-1 !=-1)
            return 1;
        else
            return 2;
    }
}

}
int main()
{

    int start,end,val;
    scanf("%d%d",&start,&end);
    val=arena(start,end);
    if(val==1)
    printf("Left");
    else if(val==2)
    printf("Right");
    else if(val==3)
    printf("Up");
    else
    printf("Down");

    return 0;
}
