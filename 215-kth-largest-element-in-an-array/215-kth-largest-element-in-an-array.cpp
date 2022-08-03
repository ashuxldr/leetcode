class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue <int> pq;
        // for(int i=0;i<nums.size();i++)
        //     pq.push(nums[i]);
        // while(k--)
        // {
        //     nums[0] = pq.top();
        //     pq.pop();
        // }
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};