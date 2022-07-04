class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int len = nums.size();
        vector<int> nums1;
        map<int,int> m;
        for(int i=0;i<len;i++){
            m[nums[i]]+=1;
        }
        len = floor(len/3);
        for(auto it: m){
            if(it.second > len)
                nums1.push_back(it.first);
        }
        return nums1;
    }
};