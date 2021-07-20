
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int CostPrice = 0;
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[CostPrice] > prices[i])
                CostPrice = i;
            else
            {
                maxProfit = max(maxProfit, prices[i] - prices[CostPrice]);
            }
        }
        return maxProfit;
    }
};
int main()
{
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    auto ans = s.maxProfit(prices);
    return 0;
}
