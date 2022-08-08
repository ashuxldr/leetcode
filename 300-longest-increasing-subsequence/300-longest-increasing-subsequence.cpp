class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> tail;
        for(int num : nums){
            if(tail.empty() or num > tail.back()){
                tail.push_back(num);
            }
            else{
                tail[(lower_bound(tail.begin(), tail.end(), num) - tail.begin())] = num;
            }
        }
        return tail.size();
    }
};