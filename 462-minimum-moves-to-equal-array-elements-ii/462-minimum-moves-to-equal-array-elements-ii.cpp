typedef long long ll;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums[nums.size()/2];
        int c = 0;
        for(int i=0;i<nums.size();i++){
         c += abs(n-nums[i]);   
        }
        return c;
    }
};