class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> lst;
        int c=0,d=0;
        while(c<m && d<n){
            if(nums1[c]>nums2[d])
                lst.push_back(nums2[d++]);
            else
                lst.push_back(nums1[c++]);
        }
        while(c<m){
                lst.push_back(nums1[c++]);
        }
        while(d<n){
                lst.push_back(nums2[d++]);
        }
        nums1 = lst;
        // for(int i=0;i<n;i++){
        //     nums1[i+m] = nums2[i];
        // }
        // sort(nums1.begin() , nums1.end());
    }
};