class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());    
        for(int j=0;j<nums.size();j++){
                if(nums[j+1]==nums[j])
                    return nums[j];
        }
        return 0;
    }
};