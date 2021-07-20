
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int costPrice = 0;
        int Profit = 0;
        int i;
        for (i = 1; i < prices.size(); i++)
        {
            if (prices[i] < prices[i - 1])
            {
                Profit += prices[i - 1] - prices[costPrice];
                costPrice = i;
            }
        }
        Profit += prices[i - 1] - prices[costPrice];
        return Profit;
    }
};
int main()
{
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    auto ans = s.maxProfit(prices);
    return 0;
}
