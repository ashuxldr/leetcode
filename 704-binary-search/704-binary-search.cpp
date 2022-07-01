class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0,l=nums.size();
        int m = (f+l)/2;
        while(f<=l && f<nums.size() && l<=nums.size()){
        m = (f+l)/2;
        if(nums[m]==target)
            return m;
        else if(nums[m] > target)
            l = m-1;
        else 
            f = m+1;
        }
        return -1;
    }
};