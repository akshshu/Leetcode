
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int sum, vector<int> &coins, vector<int> &dp)
    {
        if (sum == 0)
            return 0;
        if (dp[sum] != INT_MAX)
        {
            return dp[sum];
        }
        int x = INT_MAX;
        for (int i = 0; i < coins.size(); i++)
        {
            if (sum - coins[i] >= 0)
            {
                int y = recurs(sum - coins[i], coins, dp);
                if (y != -1)
                    x = min(x, y + 1);
            }
        }
        dp[sum] = (x == INT_MAX) ? -1 : x;
        return dp[sum];
    }
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, INT_MAX);
        int x = recurs(amount, coins, dp);
        return x;
    }
};
int main()
{
    Solution s;
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    auto ans = s.coinChange(coins, amount);
    return 0;
}
