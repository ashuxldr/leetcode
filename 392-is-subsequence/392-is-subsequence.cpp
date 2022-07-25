class Solution {
public:
    
//     void subQ(string s,string x,string t,string &ans,int i){
//             if(i>s.size()){
//                 return;
//             }
//         if(x==t){
//             ans=t;
//             return;
//         }
        
//         subQ(s,x,t,ans,i+1);
//         x = x+s[i];
//         subQ(s,x,t,ans,i+1);
//     }
    
    
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int c=0;
        while(i<s.size() and j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
                c++;
            }
            else
                j++;
        }
        if(c==s.size())
            return true;
        else 
            return false;
    }
};