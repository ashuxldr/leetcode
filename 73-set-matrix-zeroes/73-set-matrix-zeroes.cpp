#define REP(i, a, b) for (int i=a; i<b; i++) 
#define MP make_pair
#define PB push_back
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<pair<int,int>> v;
        REP(i,0,m){
            REP(j,0,n){
                if(matrix[i][j]==0)
                    v.PB(MP(i,j));
            }
        }

        int f=0,g=0;
        REP(i,0,v.size()){
            f=v[i].first;
            g=v[i].second;
        REP(j,0,n){
            matrix[f][j]=0;
        }
            REP(j,0,m){
            matrix[j][g]=0;
        }
        }
        // REP(i,0,m){
        //     REP(j,0,n){
        //     cout<<matrix[i][j];
        //     }
        // }
    }
};