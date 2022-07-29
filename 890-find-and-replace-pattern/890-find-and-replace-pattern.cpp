class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> res;
        for(auto x:words){
            map<char,char> mp;
            map<char,char> pm;

            int f=1;
            for(int i=0;i<pattern.size();i++){
                if(!mp[x[i]]){
                mp[x[i]] = pattern[i];
                    // cout<<mp[x[i]];
                }
                
                if(!pm[pattern[i]]){
                pm[pattern[i]] = x[i];
                    // cout<<pm[pattern[i]];
                }
                                    // cout<<endl;
                // if(pm[pattern[i]]!=x[i])
                                if(mp[x[i]]!=pattern[i] or pm[pattern[i]]!=x[i])
                {
                    // cout<<mp[x[i]]<<pm[pattern[i]]<<endl;
                    f=0;
                    break;
                }
                
                // if(mp[x[i]])
                // {
                //     cout<<(mp[x[i]]!=pm[pattern[i]]);
                //     if(mp[x[i]]!=pm[pattern[i]]){
                //     f=0;
                //     break;
                //     }
                // }
                // else{
                //     pm[pattern[i]] = x[i];
                //     mp[x[i]] = pattern[i];
                // }
                // cout<<(mp[x[i]]?1:0);
            }
            // mp.clear();
            // pm.clear();
            if(f==1)
                res.push_back(x);
        }
        return res;
    }
};