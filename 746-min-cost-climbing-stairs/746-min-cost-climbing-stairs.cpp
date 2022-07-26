class Solution {
public:
    
    int solve(vector<int> cost,int n, vector<int> &dp){
        if(dp[n]>0)
            return dp[n];
        if(n==0)
            return cost[0];
        if(n==1)
            return cost[1];
        dp[n]= cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }
    
      int minCostClimbingStairs(vector<int>& cost) {
          vector<int> dp(cost.size()+1);
        return min(solve(cost,cost.size()-1,dp),solve(cost,cost.size()-2,dp));
        
        // for (int i = cost.size() - 3; ~i; i--)
        //     cost[i] += min(cost[i+1], cost[i+2]);
        // return min(cost[0], cost[1]);
      }
};