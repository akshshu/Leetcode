
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        dp[n] = 0;
        dp[n - 1] = cost[n - 1];
        for (int i = n - 2; i >= 0; i--)
            dp[i] = min(dp[i + 1] + cost[i], dp[i + 2] + cost[i]);
        return min(dp[1], dp[0]);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
