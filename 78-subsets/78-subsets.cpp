class Solution {
public:
    
    void solve(vector<int> nums,vector<int> nums1, vector<vector<int>>& ans, int i){
        if(i>nums.size()-1){
            ans.push_back(nums1);   
            return;
        }

        // exclude         
        solve(nums,nums1,ans,i+1);
        // include         
        nums1.push_back(nums[i]);
        solve(nums,nums1,ans,i+1);
        // ans.push_back(nums1);
 
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> nums1;
        solve(nums,nums1,ans,0);
        return ans;
    }
};