class Solution {
public:
    void bfs(int row,int col,vector<vector<char>>& grid)
  {
      int n=grid.size();
      int m=grid[0].size();
     
     if(row<0 || row>n-1 || col<0 || col>m-1)
         return;
        if(grid[row][col]=='0')
            return;
        grid[row][col]='0';
        bfs(row-1,col,grid);
        bfs(row+1,col,grid);
        bfs(row,col-1,grid);
        bfs(row,col+1,grid);
  }
    int numIslands(vector<vector<char>>& grid)
    {
         int cnt=0;
         int n=grid.size();
         int m=grid[0].size();
         for(int row=0;row<n;row++)
       {
         for(int col=0;col<m;col++)
       {
         if(grid[row][col]=='1')
         {
             cnt++;
             bfs(row,col,grid);
          }
       }
         
       }
     return cnt;
    }
};
