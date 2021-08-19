
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void floodfill(vector<vector<char>> &grid, int i, int j)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != '1')
            return;
        grid[i][j] = '/';
        floodfill(grid, i + 1, j);
        floodfill(grid, i - 1, j);
        floodfill(grid, i, j + 1);
        floodfill(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int N = grid.size();
        int M = grid[0].size();
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid[i][j] == '1')
                {
                    count++;
                    floodfill(grid, i, j);
                }
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<vector<char>> board = {{'1', '1', '1', '1', '0'}, {'1', '1', '0', '1', '0'}, {'1', '1', '0', '0', '0'}, {'0', '0', '0', '0'}};
    auto ans = s.numIslands(board);
    cout << ans;
    return 0;
}
