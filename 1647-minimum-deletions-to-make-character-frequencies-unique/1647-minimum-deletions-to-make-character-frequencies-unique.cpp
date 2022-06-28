class Solution {
public:
int minDeletions(string s)
{
    vector<int> fre(26, 0);
    set<int> seen; 
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        fre[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        while (fre[i] && seen.find(fre[i]) != seen.end()) {
            fre[i]--;
            cnt++;
        }
 
        seen.insert(
            fre[i]);
    }
 
    return cnt;
}
};