class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> uniqueSet ;
    for (int num : nums) {
      if (uniqueSet.find(num) != uniqueSet.end())
            return true;
      uniqueSet.insert(num);
    }
    return false;
    }
};