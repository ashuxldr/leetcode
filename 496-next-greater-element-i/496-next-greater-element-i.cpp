class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size();
        vector<int> ans(len);
        for(int i=0;i<len;i++){
            int j=0,res=INT_MAX;
            while(j<nums2.size()){
                if(nums1[i]==nums2[j])
                    res=nums1[i];
                if(nums2[j]>res){
                    res=nums2[j];
                    break;                    
                }
                j++;
            }
            if(res>nums1[i])
                ans[i]=res;
            else 
                ans[i]=-1;
        }
        return ans;
    }
};