class Solution {
public:
    string removeOuterParentheses(string s) {
        string st="";int c=0;
        for(char i:s){
            if(i=='(' and c++ >0)
                st+=i;
            else if(i==')' and c-- >1)
                st+=i;
        }
        return st;
    }
};