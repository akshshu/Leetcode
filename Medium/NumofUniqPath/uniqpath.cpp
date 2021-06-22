
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int m, int n, vector<vector<int>> &dp)
    {
        if (m == 0 || n == 0)
            return 1;
        if (dp[m][n] != -1)
            return dp[m][n];
        dp[m][n] = recurs(m - 1, n, dp) + recurs(m, n - 1, dp);
        return dp[m][n];
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return recurs(m - 1, n - 1, dp);
    }
};
int main()
{
    Solution s;
    auto ans = s.uniquePaths(3, 2);
    return 0;
}
