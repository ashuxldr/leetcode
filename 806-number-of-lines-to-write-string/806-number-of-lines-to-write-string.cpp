class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 0;
        int curr = 0;
        for(int i=0;i<s.size();i++){
            if(curr + widths[s[i]-'a'] > 100){
                ++lines;
                curr = 0;
            }
            curr = curr + widths[s[i]-'a'];
        }
        return {lines+1, curr};
    }
};