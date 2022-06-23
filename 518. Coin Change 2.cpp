class Solution {
   public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, 0));

        for (int i = 0; i < coins.size(); i++) {
            for (int j = 0; j < (amount + 1); j++) {
                if (j == 0) {
                    dp[i][j] = 1;
                    continue;
                }
                if (i == 0) {
                    if ((j - coins[i]) >= 0) {
                        dp[i][j] = dp[i][j - coins[i]];
                    }
                    continue;
                }
                dp[i][j] = dp[i - 1][j] + (((j - coins[i]) >= 0) ? dp[i][j - coins[i]] : 0);
            }
        }

        return dp[coins.size() - 1][amount];
    }
};
