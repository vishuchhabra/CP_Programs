// DFS algorithm //going to the deep into the memory
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//DFS
void print_dfs(int **graph ,int n,int sv,int visit[]) //here sv for starting point
{
  //first work
  cout<<sv<<endl;
  visit[sv]=1;
  for(int i=0;i<n;i++)
  {
      if(i==sv)
        continue;
      if(graph[sv][i]){
        if(visit[i])
        continue;

        print_dfs(graph ,n,i,visit);
      }
  }

}

//BFS
void print_bfs(int **graph,int n,int sv,int visit[])
{
    queue<int>q1;
    q1.push(sv);
    visit[sv]=1;

    while(!q1.empty())
    {
       int ele = q1.front();
       q1.pop();
       visit[ele]=1;
       cout<<ele<<endl;
       for(int i=0;i<n;i++)
       {
          if(i==ele)
            continue;
          if(graph[ele][i]==1 && !visit[i]){
          q1.push(i);
          visit[i]=1;
          }
       }

    }
}

//bfs and dfs for disconnected graphs is shown following as

void Dfs(int **graph, int n)
{
    int visit[n]={0};//mark as not visited
    for(int i=0;i<n;i++)
      if(!visit[i])
        print_dfs(graph,n , i, visit);
}
void Bfs(int **graph ,int n)
{

  int visit[n]={0};//mark as not visited
    for(int i=0;i<n;i++)
      if(!visit[i])
        print_bfs(graph,n , i, visit);
}
int main()
{
    int n,e;
    cin>>n>>e;//for number of the edges and nodes

    //graph matrix
    //1 for edges and 0  for the no  edge
    int **graph  = new int*[n];
    for(int i=0;i<n;i++)
     graph[i]=new int[n];
    //for initialize the graph
    for (int i=0;i<n;i++)//by zero
      for(int j=0;j<n;j++)
        graph[i][j]= 0;

    //for input of e edges
    for(int i=0;i<e;i++)
    {
        //x  and y denote the nodes here
        int x ,y;
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    cout<<"DFS"<<endl; //for disconnected as well connected graph
    Dfs(graph,n); // vertix

    cout<<"BFS"<<endl; //for connected as well as disconnected graph
    Bfs(graph ,n);
    return 0;
}
