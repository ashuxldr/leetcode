class Solution {
public:
    
//     void solve(vector<int> nums, vector<vector<int>>& res, int i){
//         if(i==nums.size())
//         {
//             res.push_back(nums);
//             return;
//         }
//         for(int k=i+1;k<nums.size();k++){
//             swap(nums[i],nums[k]);
//             solve(nums,res,i+1);
//             swap(nums[i],nums[k]);
//         }
//     }
    
    void nextPermutation(vector<int>& nums) {
        
        next_permutation(nums.begin(),nums.end());
        // vector<vector<int>> res;
        // solve(nums,res,0);
        // for(int i=0;i<res.size();i++){
        //     if(res[i] == nums)
        //         nums = res[i+1];
        // }
    }
};