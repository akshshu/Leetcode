
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans = 0;
    int recurs(int j, int sum, vector<int> &coins, vector<vector<int>> &dp)
    {
        if (j < 0)
            return 0;
        if (sum < 0)
            return 0;
        if (sum == 0)
            return 1;
        if (dp[j][sum] != -1)
            return dp[j][sum];
        dp[j][sum] = recurs(j, sum - coins[j], coins, dp) + recurs(j - 1, sum, coins, dp);
        return dp[j][sum];
    }
    int change(int amount, vector<int> &coins)
    {
        vector<vector<int>> dp(coins.size(), vector<int>(5001, -1));
        return recurs(coins.size() - 1, amount, coins, dp);
    }
};
int main()
{
    Solution s;
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    auto ans = s.change(amount, coins);
    return 0;
}
