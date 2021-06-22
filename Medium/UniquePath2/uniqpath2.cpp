
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int m, int n, vector<vector<int>> &dp, vector<vector<int>> &obstacleGrid)
    {

        if (m == 0 && n == 0)
            return 1;
        else if (m < 0 || n < 0)
            return 0;
        if (obstacleGrid[m][n] == 1)
            return 0;
        if (dp[m][n] != -1)
            return dp[m][n];
        dp[m][n] = recurs(m - 1, n, dp, obstacleGrid) + recurs(m, n - 1, dp, obstacleGrid);

        return dp[m][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1)
            return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return recurs(m - 1, n - 1, dp, obstacleGrid);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
