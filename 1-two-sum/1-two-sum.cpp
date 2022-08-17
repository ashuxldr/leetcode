class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<nums.size()-1){
            if(nums[i]+nums[j]==target)
                return {i,j};
            
            j--;
            if(i==j)
            {
                i++;
                j=nums.size()-1;
                }
        }
        return {};
    }
};