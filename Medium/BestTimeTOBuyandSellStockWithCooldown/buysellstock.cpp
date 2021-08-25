
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> noStock;
    vector<int> inhand;
    vector<int> sold;
    int maxProfit(vector<int> &prices)
    {

        noStock.resize(prices.size(), 0);
        inhand.resize(prices.size(), 0);
        sold.resize(prices.size(), 0);
        inhand[0] = -prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            noStock[i] = max(noStock[i - 1], sold[i - 1]);
            sold[i] = (inhand[i - 1] + prices[i]);
            inhand[i] = max(inhand[i - 1], noStock[i - 1] - prices[i]);
        }
        return max(noStock[prices.size() - 1], sold[prices.size() - 1]);
    }
};
int main()
{
    Solution s;
    vector<int> prices = {1, 2, 3, 0, 2};
    auto ans = s.maxProfit(prices);
    return 0;
}
