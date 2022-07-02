class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int x = max(horizontalCuts[0]-0, h - horizontalCuts[horizontalCuts.size()-1]);
        
        for (int i = 1;i<horizontalCuts.size(); i++){
            int horizatalWidth = horizontalCuts[i] - horizontalCuts[i-1];
            x = max(x, horizatalWidth);
        }


        int y = max(verticalCuts[0]-0, w - verticalCuts[verticalCuts.size()-1]);
        for (int i = 1;i<verticalCuts.size(); i++){
            int verticalWidth = verticalCuts[i] - verticalCuts[i-1];
            y = max(y, verticalWidth);
        }
        long long res = (1L * x*y) ;
        return int(res % 1000000007);
    }
};
