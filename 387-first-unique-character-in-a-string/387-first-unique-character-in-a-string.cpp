class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(0);
        int j=0,f[26]={};
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            f[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            if(f[s[i]-'a']==1)
                return i;
        }
        
    return -1;
     
        
    }
};