
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans = 0;
    void floodfill(vector<vector<int>> &grid, int i, int j, int &count)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
            return;
        count++;
        if (count > ans)
            ans = count;
        grid[i][j] = 2;
        floodfill(grid, i + 1, j, count);
        floodfill(grid, i - 1, j, count);
        floodfill(grid, i, j + 1, count);
        floodfill(grid, i, j - 1, count);
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int N = grid.size();
        int M = grid[0].size();
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid[i][j] == 1)
                {
                    int count = 0;
                    floodfill(grid, i, j, count);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}, {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0}, {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
    auto ans = s.maxAreaOfIsland(grid);
    cout << ans;
    return 0;
}
