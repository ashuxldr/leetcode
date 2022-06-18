class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==101)
                continue;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    nums[j]=101;
                    ++k;
                }
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size()-k;
    }
};