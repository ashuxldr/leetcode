class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {         
        if(color==image[sr][sc])
            return image;
        dfs(image,sr,sc,color);
        return image;
    }
private:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color){
        int m = image.size();
        int n = image[0].size();
        int oldColor = image[sr][sc];
        image[sr][sc] = color;
        vector<int> dr = {0,1,0,-1};
        vector<int> dc = {1,0,-1,0};
        for(int i=0;i<4;i++){
            int r = sr+dr[i];
            int c = sc+dc[i];
            if(r>=m or r<0 or c<0 or c>=n or oldColor!=image[r][c])
            continue;
            dfs(image,r,c,color);
        }
    }
};