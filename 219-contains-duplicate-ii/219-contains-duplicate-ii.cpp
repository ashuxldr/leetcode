class Solution {
public:
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    bool ans = false;
    map<int,int>m;
    m[nums[0]]=1;
    for(int i=1;i<nums.size();i++)
    {
    if(m[nums[i]]!=0)
    {
    int d = m[nums[i]];
    int diff= (i+1)-d;
    if(diff<=k)
    {
    ans = true;
    break;
    }
    }
    m[nums[i]]=i+1;
    }
    return ans;
    }
};