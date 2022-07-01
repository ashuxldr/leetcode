// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // if(n==1)
        //     return 1;
        long long f=1,l=n, index = 1;
        long long m = (f+l)/2;
        while(f<=l){
        m = (f+l)/2;
        if(isBadVersion(m))
        {
            index = m;
            l = m-1;
        }
        else {
        f = m+1;
        }
        }
        return index;
    }
};