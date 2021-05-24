
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> dp;
    int recurs(int n)
    {
        if (n == 1 || n == 0)
            return 1;
        if (dp[n] != 0)
            return dp[n];
        for (int i = 0; i < n; i++)
        {
            dp[n] += (recurs(i) * recurs(n - i - 1));
        }
        return dp[n];
    }
    int numTrees(int n)
    {
        dp.resize(n + 1);
        fill(dp.begin(), dp.end(), 0);
        return recurs(n);
    }
};
int main()
{
    Solution s;
    auto ans = s.numTrees(3);
    cout << ans;
    return 0;
}
