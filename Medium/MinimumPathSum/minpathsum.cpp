
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> dp;
    int ans;
    int recurs(vector<vector<int>> &grid, int r, int x)
    {
        if (r == 0 && x == 0)
        {
            return grid[0][0];
        }
        if (r < 0 || x < 0)
            return INT_MAX;
        if (dp[r][x] != -1)
            return dp[r][x];
        dp[r][x] = grid[r][x] + min(recurs(grid, r - 1, x), recurs(grid, r, x - 1));
        return dp[r][x];
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        dp.resize(grid.size());
        for (auto &x : dp)
        {
            x.resize(grid[0].size());
            fill(x.begin(), x.end(), -1);
        }
        ans = recurs(grid, grid.size() - 1, grid[0].size() - 1);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> grid{{1, 2, 3}, {4, 5, 6}};
    auto ans = s.minPathSum(grid);
    cout << ans;
    return 0;
}
