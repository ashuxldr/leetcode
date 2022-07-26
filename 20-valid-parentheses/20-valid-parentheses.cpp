class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty() or (s[i]==')' and st.top()!='(') or (s[i]=='}' and st.top()!='{') or (s[i]==']' and st.top()!='['))
                    return false;
                else
                    st.pop();
            }
        }
        if(st.empty())
        return true;
        else
            return false;
    }
};