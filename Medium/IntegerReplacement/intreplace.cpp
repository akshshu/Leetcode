
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, int> dp;
    int helper(int n)
    {
        if (n == 1)
        {
            return 0;
        }
        if (dp.find(n) != dp.end())
            return dp[n];
        if (n % 2 == 0)
            dp[n] = 1 + helper(n / 2);
        else
        {
            if (n == INT_MAX)
                return helper(n - 1);
            dp[n] = 1 + min(helper(n + 1), helper(n - 1));
        }
        return dp[n];
    }
    int integerReplacement(int n)
    {
        if (n == 1)
            return 0;
        return helper(n);
    }
};
int main()
{
    Solution s;
    auto ans = s.integerReplacement(8);
    return 0;
}
