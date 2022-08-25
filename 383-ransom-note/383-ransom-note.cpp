class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        for(auto ch:magazine)
            m[ch]++;
        
        for(auto ch:ransomNote){
            if(m[ch]==0)
                return false;
            m[ch]--;

        }
 
        return true;
    }
};