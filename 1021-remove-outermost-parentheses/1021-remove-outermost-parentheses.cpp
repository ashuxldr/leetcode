class Solution {
public:
     string removeOuterParentheses(string s) {
        stack<char> str;
        string output = "";
        int j=1;
        for(int i=0;i<s.length();i++){
            if(!str.empty() && s[i] == ')' && str.top() == '('){
                // str.push(s[i]);
                str.pop();
            }
            else{
                str.push(s[i]);
            }
            if(str.empty()){
                output += s.substr(j,i-j);
                // cout << output<< endl;
                j = i+2;
            }
        }
        return output;
    }
};