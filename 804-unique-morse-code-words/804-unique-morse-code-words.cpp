class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // array for storing morse code         
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        // unordered map for storing unique values(no ordering is required)         
        unordered_map<string,int> m;
        
        // loop through array for words         
        for(auto it:words){
        
        // storing morse code 
        string r = "";
        for(auto i:it){
            // i-'a' -> 0 for char('a') which will refer to 0 index 
            // then access morse[0] for required change             
            r = r+morse[i-'a'];
        }
        // store the unique morse codes (set can also be used)         
        m[r]++;
    }
        // return size of map         
        return m.size();
    }
};