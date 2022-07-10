class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(), nums.end());
        
        int c=1, m=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
                nums[i] = INT_MIN;
        }
        sort(nums.begin(), nums.end());
        nums.push_back(0);
        for(int i=0;i<nums.size()-1;i++){
            // cout<<nums[i]<<c<<endl;
            if(c>m)
                m=c;
            if(nums[i]+1 == nums[i+1])
                c++;
            else
                c=1;
        }
        return m;
    }
};