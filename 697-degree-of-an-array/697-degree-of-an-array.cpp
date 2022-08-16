class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int first[50000];
        int tally[50000] {};
        
        int max_elem = -1;
        int maxtally = -1;
        int result = INT_MAX;
        
        for(int i=0;i<nums.size();i++) 
        {
            int k = nums[i];
            if(tally[k]==0) first[k]=i; 
            
            tally[k]++;
            int newtally = tally[k];
            if(maxtally < newtally)
            {
                maxtally = newtally;
                max_elem = k;
                result = i-first[k]+1;
            } 
            else if(maxtally==newtally)
            {
                int dist = 1+i-first[k];
                if(result > dist) result =dist;
            }
        }
        
        return result;
    }
};