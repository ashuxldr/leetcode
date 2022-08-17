// TIME: O(N)
// SPACE: O(1)
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        // to store count of lines and curr width of pixels         
        int lines = 0,curr = 0;
        for(int i=0;i<s.size();i++){
            // checking if adding a character will exceed line             
            if(curr + widths[s[i]-'a'] > 100){
                // increase line                 
                ++lines;
                // set current line to 0 (starting of new line)                 
                curr = 0;
            }
            // add pixels of character             
            curr = curr + widths[s[i]-'a'];
        }
        // add 1 to lines for the current line and return the pixels
        return {lines+1, curr};
    }
};