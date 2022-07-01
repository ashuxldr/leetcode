class Solution {
public:
    static bool sortcol(vector<int>& v1,vector<int>& v2)
    {
    return v1[1] > v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int c=0;
        sort(boxTypes.begin(), boxTypes.end(), sortcol);
        for(auto it: boxTypes){
            if(it[0]>truckSize){
                c = c+ truckSize*it[1];
                break;
            }else{
            c += (it[0]*it[1]);
                truckSize -= it[0];
            }
            
        }
        return c;
    }
};