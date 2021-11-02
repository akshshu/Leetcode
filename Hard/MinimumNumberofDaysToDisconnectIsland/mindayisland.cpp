
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int i, int j, vector<vector<int>> &grid, int val, vector<pair<int, int>> &vp)
    {
        if (i < 0 or i >= grid.size() or j >= grid[0].size() or j < 0 or grid[i][j] != 1)
            return;
        grid[i][j] = val;
        vp.push_back({i, j});
        dfs(i - 1, j, grid, val, vp);
        dfs(i, j - 1, grid, val, vp);
        dfs(i + 1, j, grid, val, vp);
        dfs(i, j + 1, grid, val, vp);
    }
    void dfs2(int i, int j, vector<vector<int>> &grid)
    {
        if (i < 0 or i >= grid.size() or j >= grid[0].size() or j < 0 or grid[i][j] == 0)
            return;
        grid[i][j] = 0;
        dfs2(i - 1, j, grid);
        dfs2(i, j - 1, grid);
        dfs2(i + 1, j, grid);
        dfs2(i, j + 1, grid);
    }
    int minDays(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int islandCount = 0;
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                    dfs(i, j, grid, --islandCount, vp);
                if (islandCount < -1)
                    return 0;
            }
        }
        if (islandCount == 0)
            return 0;
        for (auto v : vp)
        {
            auto copy = grid;
            copy[v.first][v.second] = 0;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (copy[i][j])
                    {
                        dfs2(i, j, copy);
                        count++;
                    }
                    if (count > 1)
                        return 1;
                }
            }
            if (count == 0)
                return 1;
        }
        return 2;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
