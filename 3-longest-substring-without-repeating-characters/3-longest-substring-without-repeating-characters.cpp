class Solution {
public:
    
    int longestUniqueSubsttr(string str)
    {

    int n = str.size();

    int res = 0; // result
 

    for (int i = 0; i < n; i++) {
        vector<bool> visited(256);   
        for (int j = i; j < n; j++) {
            if (visited[str[j]] == true)
                break;
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
        visited[str[i]] = false;
    }
    return res;
    }
    
    int lengthOfLongestSubstring(string s) {
    int len = longestUniqueSubsttr(s);
    return len;
    }
};
