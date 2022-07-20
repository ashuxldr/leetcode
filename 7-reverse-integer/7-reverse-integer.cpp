class Solution {
public:
    int reverse(int x) {
        int sign = x>0 ? 1: -1;
        long long d = abs(x);
        long long r = 0;
        while(d!=0){    
        r = r*10+(d%10);
            d = d/10;
        }
        r = r*sign;
        if(r>=pow(2,31) and sign==1)
            return 0;
        if(sign==-1 and r<=pow(-2,31))
            return 0;
        
        return r;
    }
};