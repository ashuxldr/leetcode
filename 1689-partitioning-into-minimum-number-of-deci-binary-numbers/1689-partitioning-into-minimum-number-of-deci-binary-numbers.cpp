class Solution {
public:
    int minPartitions(string n) {
     map <char,int> m;
        // int f=1;
    for(int i=0;i<n.length();i++){
        // if(n[i]!='0' && n[i]!='1')
        // {
        //     f=0;
        // }
        m[n[i]] = 1; 
    }
        // if(f==1)
        // return 0;
        for(char i='9';i>='0';i--){
            if(m[i] == 1){
                return int(i)-48;
            }
        }
        return 0;
    }
};