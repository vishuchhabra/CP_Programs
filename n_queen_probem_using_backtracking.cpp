  #include<bits/stdc++.h>
  #include<iostream>
  using namespace std;
  int board[11][11];
  int flag =0;
  bool  ispossible(int n,int row,int col)
  {
     for(int i=row-1;i>=0;i--)
     {

         if(board[i][col])
            return false;
     }
     for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
     {

         if(board[i][j])
            return false;

     }
     for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
     {
         if(board[i][j])
            return false;

     }
      return true;
  }
  void helpqueen(int n,int row)
  {


       if(row ==n)
      {

          cout<<"[";
          for(int i=0;i<n;i++){
             for(int j=0;j<n;j++)
             {
                 if(board[i][j])
                    cout<<j+1<<" ";

             }
          }
          cout<<"] ";
          flag=1;
          return ;
      }
      for(int j=0;j<n;j++)
      {

          if(ispossible(n,row,j))
          {

              board[row][j]=1;
              helpqueen(n,row+1);
              board[row][j]=0;
          }
      }
      return ;
  }
  void placequeen(int n)
  {
      memset(board,0,121*sizeof(int));
      helpqueen(n,0);
      return;
  }
  int main()
  {
      int cases;
      cin>>cases;
      while(cases--)
      {
          int n;
          cin>>n;
          placequeen(n);
          if(!flag)
          {

              cout<<"-1";

          }
          else
            flag=0;
          cout<<endl;
      }
      return 0;
  }
