class Solution {
public:
    void dfs(int j, vector<int> &vis,vector<int> adj[]){
        vis[j] = 1;
        
        for(auto it: adj[j]){
            if(!vis[it]){
                dfs(it, vis, adj);
            }
        }
    }
        int findCircleNum(vector<vector<int>> adjM) {
            int n=adjM.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            {
                if(i!=j and adjM[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        
    
        vector<int> vis(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ++cnt;
                dfs(i, vis, adj);
            }
        }
        return cnt;
    }
};
