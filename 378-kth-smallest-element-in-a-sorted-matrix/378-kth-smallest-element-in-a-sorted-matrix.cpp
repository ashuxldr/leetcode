class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int len = matrix.size();
        vector<int> v(len*len);
        for(int i=0;i<len*len;i++){
            v[i] = matrix[i/len][i%len];
        }
        sort(v.begin(),v.end());
    return v[k-1];
    }
};

