class Solution {
public:
    
    string reverseWords(string s) {
        int i;
        string rev = "";
        string words = "";
        for(i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and rev!="")
            {
                words = words+rev+" ";
                rev="";
            }
            else if(s[i]!=' ')
                rev = s[i]+rev;
        }
        words = words+rev;
        i=0;int e=words.size()-1;
        while(words[i]==' ')
            i++;
        while(words[e]==' ')
            e--;
        rev="";
        for(int j=0;i<=e;i++){
            rev= rev+words[i];
        }
        return rev;
    }
    
};