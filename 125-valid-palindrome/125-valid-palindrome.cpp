class Solution {
public:
 bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i<s.length(); i++){
            if(isalnum(s[i]))
                str.push_back(tolower(s[i]));
        }
        return equal(str.begin(), str.end(), str.rbegin());
    }
};