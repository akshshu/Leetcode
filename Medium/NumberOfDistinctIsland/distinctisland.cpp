
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void floodfill(vector<vector<int>> &grid, int i, int j, char direc, string &pattern, int hort, int vert)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
            return;
        grid[i][j] = 2;
        pattern += to_string(i - hort) + to_string(j - vert) + direc;
        floodfill(grid, i + 1, j, 'D', pattern, hort, vert);
        floodfill(grid, i - 1, j, 'U', pattern, hort, vert);
        floodfill(grid, i, j + 1, 'R', pattern, hort, vert);
        floodfill(grid, i, j - 1, 'L', pattern, hort, vert);
    }
    int numberofDistinctIslands(vector<vector<int>> &grid)
    {
        int N = grid.size();
        int M = grid[0].size();
        int count = 0;
        unordered_map<string, int> mp;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid[i][j] == 1)
                {
                    string pattern = "";
                    floodfill(grid, i, j, 'U', pattern, i, j);
                    if (mp[pattern] == 0)
                    {
                        count++;
                        mp[pattern] = 1;
                    }
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {
        {1, 1, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 1, 1}};
    auto ans = s.numberofDistinctIslands(grid);
    cout << ans;
    return 0;
}
