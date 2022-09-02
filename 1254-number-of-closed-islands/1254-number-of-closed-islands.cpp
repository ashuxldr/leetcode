class Solution {
private:
    bool solve(vector<vector<int>>& grid, int i, int j){
        if(i<0 or j<0 or i>=grid.size() or j>= grid[0].size())
            return false;
        if(grid[i][j]==1)
            return true;
        grid[i][j]=1;
        bool d1 = solve(grid, i+1, j);
        bool d2 = solve(grid, i, j+1);
        bool d3 = solve(grid, i-1, j);
        bool d4 = solve(grid, i, j-1);
        return d1 && d2 && d3 && d4;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) 
            for (int j = 0; j < grid[0].size(); j++){
                if(grid[i][j]==0 and solve(grid, i,j))
                    ++count;
            }
    return count;
    }
};