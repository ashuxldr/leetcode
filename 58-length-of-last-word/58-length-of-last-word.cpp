class Solution {
public:
    int lengthOfLastWord(string s) {
        string r = "";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and r.size()==0)
                continue;
            if(s[i]==' ')
                break;
            else
                r = s[i]+r;
        }
        return r.size();
    }
};