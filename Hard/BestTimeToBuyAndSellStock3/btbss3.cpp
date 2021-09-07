
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        left[0] = 0;
        int minGlobal = prices[0];
        int maxGlobal = prices[n - 1];
        right[n - 1] = 0;
        for (int i = 1; i < n; i++)
        {
            left[i] = max(left[i - 1], prices[i] - minGlobal);
            minGlobal = min(minGlobal, prices[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(right[i + 1], maxGlobal - prices[i]);
            maxGlobal = max(maxGlobal, prices[i]);
        }
        int profit = right[0];
        for (int i = 1; i < n; i++)
        {
            profit = max(profit, left[i - 1] + right[i]);
        }
        return profit;
    }
};
int main()
{
    Solution s;
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    auto ans = s.maxProfit(prices);
    return 0;
}
