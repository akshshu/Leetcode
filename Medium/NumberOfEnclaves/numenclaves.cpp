
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans = 0;
    void NumLandCells(int i, int j, vector<vector<int>> &grid)
    {
        if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == 0)
            return;
        grid[i][j] = 0;
        NumLandCells(i - 1, j, grid);
        NumLandCells(i, j + 1, grid);
        NumLandCells(i, j - 1, grid);
        NumLandCells(i + 1, j, grid);
    }
    int numEnclaves(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] and (i == 0 || j == 0 || i == m - 1 || j == n - 1))
                    NumLandCells(i, j, grid);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j])
                    ans++;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
