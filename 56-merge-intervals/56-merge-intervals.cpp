class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int x = intervals.size();
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        vector<int> v = intervals[0];
        for(int i=0;i<x;i++){
            if(v[1]>=intervals[i][0]){
                v = {v[0], max(v[1],intervals[i][1])};
            }
            else{
                res.push_back(v);
                v = intervals[i];
            }
        }
        res.push_back(v);
        return res;
    }
};