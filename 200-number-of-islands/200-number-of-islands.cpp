class Solution {
private:
void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>>& grid){
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row,col});
    int n = grid.size();
    int m = grid[0].size();

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                    !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                            vis[nrow][ncol] = 1;
                            q.push({nrow,ncol});
                        }
        }
        
    }
}

public:
    int numIslands(vector<vector<char>>& grid) {
        int rowsize = grid.size();
        int colsize = grid[0].size();
        vector<vector<int>> vis(rowsize,vector<int>(colsize,0));
        int count=0;
        for(int i=0;i<rowsize;i++){
         for(int j=0;j<colsize;j++){
            if(!vis[i][j] and grid[i][j]=='1'){
                bfs(i,j,vis,grid);
                ++count;
            }
        }   
        }
        return count;
    }
};