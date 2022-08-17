class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        map<string,int> m;
        int c=0;
    for(auto it:words){
        string r = "";
        for(auto i:it){
            r = r+morse[i-'a'];
        }
        m[r]++;
    }
        for(auto itr:m)
            c++;
        return c;
    }
};