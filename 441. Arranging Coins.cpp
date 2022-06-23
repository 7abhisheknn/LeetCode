class Solution {
   public:
    int arrangeCoins(int n) {
        double root = sqrt(1 + 8*(long long)n);
        int r = floor((root - 1) / 2);
        return r;
    }
};
