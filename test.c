#include<stdio.h>
#include<conio.h>
#define INFINITY 9999

void dijkstra(int G[16][16],int n,int startnode,int endnode);

int main()
{
	int i,j,n,u,e;
	int G[16][16]={
	    {

	        0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0//
	    },
	    {

	        1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0
	    },
	    {

	        0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0
	    },
	    {

	        0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0
	    },
	    {

	        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0
	    },
	    {

	        0,0,0,0,1,0,2,0,1,0,0,0,0,0,0,0
	    },
	    {

	        0,0,0,1,0,2,0,1,0,0,0,0,0,0,0,0
	    },
	    {

	        0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0
	    },
	    {

	        0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0
	    },
	    {

	        0,0,0,0,0,0,0,0,1,0,3,0,1,0,0,0
	    },
	    {

	        0,0,0,0,0,0,0,1,0,3,0,1,0,0,0,0
	    },
	    {

	        0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1
	    },{

	        0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0
	    },{

	        0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0
	    },{

	        0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1
	    },{

	        0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0
	    }
	};



	printf("\nEnter the starting node:");
	scanf("%d",&u);
	printf("\nEnter the ending node:");
	scanf("%d",&e);
	dijkstra(G,16,u,e);

	return 0;
}

void dijkstra(int G[16][16],int n,int startnode,int endnode)
{

	int cost[16][16],distance[16],pred[16];
	int visited[16],count,mindistance,nextnode,i,j;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(G[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=G[i][j];


	for(i=0;i<n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}

	distance[startnode]=0;
	visited[startnode]=1;
	count=1;

	while(count<n-1)
	{
		mindistance=INFINITY;


		for(i=0;i<n;i++)
			if(distance[i]<mindistance&&!visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}


			visited[nextnode]=1;
			for(i=0;i<n;i++)
				if(!visited[i])
					if(mindistance+cost[nextnode][i]<distance[i])
					{
						distance[i]=mindistance+cost[nextnode][i];
						pred[i]=nextnode;
					}
		count++;
	}


	    i= endnode;
		if(i!=startnode)
		{
			printf("\nDistance of node%d=%d",i,distance[i]);
			printf("\nPath=%d",i);

			j=i;
			do
			{
				j=pred[j];
				printf("<-%d",j);
			}while(j!=startnode);
	}
}
