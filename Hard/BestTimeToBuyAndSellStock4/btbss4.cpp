
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int index, int buystate, vector<int> &prices, int k, vector<vector<vector<int>>> &dp)
    {
        if (index >= prices.size() || k == 0)
            return 0;
        if (dp[buystate][k][index] != -1)
            return dp[buystate][k][index];
        int a = recurs(index + 1, buystate, prices, k, dp);
        if (buystate)
        {
            a = max(a, recurs(index + 1, 0, prices, k - 1, dp) + prices[index]);
        }
        else
        {
            a = max(a, recurs(index + 1, 1, prices, k, dp) - prices[index]);
        }
        dp[buystate][k][index] = a;
        return dp[buystate][k][index];
    }
    int maxProfit(int k, vector<int> &prices)
    {
        vector<vector<vector<int>>> dp(2, vector<vector<int>>(k + 1, vector<int>(prices.size(), -1)));
        return recurs(0, 0, prices, k, dp);
    }
};
int main()
{
    Solution s;
    int k = 2;
    vector<int> prices = {2, 4, 1};
    auto ans = s.maxProfit(k, prices);
    return 0;
}
