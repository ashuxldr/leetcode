// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         vector<int> tail;
//         for(int num : nums){
//             if(tail.empty() or num > tail.back()){
//                 tail.push_back(num);
//             }
//             else{
//                 tail[(lower_bound(tail.begin(), tail.end(), num) - tail.begin())] = num;
//             }
//         }
//         return tail.size();
//     }
// };

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        const int n = nums.size();
        vector<int> dp(n, 1);
        
        for(int i{1}; i<n; i++){
            for(int j{0}; j<i; j++){
                if(nums[i] > nums[j]) dp[i] = max(dp[i], dp[j]+1);
            }
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};