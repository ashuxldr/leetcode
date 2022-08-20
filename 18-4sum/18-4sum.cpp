class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long  ntar=(long)target-(nums[i]+nums[j]);
                int s=j+1,e=n-1;
                while(s<e){
                    if(nums[s]+nums[e]==ntar){
                        ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                        while(s<e && nums[s]==nums[s+1]) s++;
                        while(s<e && nums[e]==nums[e-1]) e--;
                        s++,e--;
                    }else  if(nums[s]+nums[e]>ntar){
                        e--;
                    }else{
                        s++;
                    }
                }
                while(j<n-1 && nums[j]==nums[j+1]) j++;
            }
            while(i<n-1 && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};