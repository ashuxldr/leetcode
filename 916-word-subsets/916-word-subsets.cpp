class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> overall(26);
        
        for(auto word:words2)
        {
            vector<int> curr(26);
            for(auto key:word)
            {
            curr[key-'a']++;
            overall[key-'a'] = max(overall[key-'a'],curr[key-'a']);
            }      
        }
        for(auto word:words1){
            int f=1;
            vector<int> curr = overall;
    
            for(auto key:word)
                curr[key-'a']--;
            
            for(auto value:curr)
                if(value>0){
                    f=0;
                    break;
                }
            
            if(f==1)
                res.push_back(word);
            }
        return res;
    }
};
