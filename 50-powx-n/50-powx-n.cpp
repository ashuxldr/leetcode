class Solution {
public:
    double myPow(double x, int n) {
        // if(n==0)
        //     return double(1);
        // double p =1.0;
        // if(n>0){
        // for(int i=0;i<n;i++)
        //     p = p*x;
        // }
        // else{
        // for(int i=0;i<abs(n);i++)
        //     p = p*x;
        // p = 1.0/p;
        // }
        return pow(x,n);
    }
};