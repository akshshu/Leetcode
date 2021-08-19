
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, int> mp;
    int ans = 0;
    void floodfill(vector<vector<int>> &grid, int i, int j, int index)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
            return;
        grid[i][j] = index;
        mp[index - 1]++;
        floodfill(grid, i + 1, j, index);
        floodfill(grid, i - 1, j, index);
        floodfill(grid, i, j + 1, index);
        floodfill(grid, i, j - 1, index);
    }
    void floodfill2(vector<vector<int>> &grid2, vector<vector<int>> &grid, int i, int j, unordered_map<int, int> &mp2)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
            return;
        grid[i][j] = 2;
        int islandNum = grid2[i][j] - 1;
        if (islandNum > 0)
        {
            mp2[islandNum]++;
            if (mp2[islandNum] == mp[islandNum])
                ans++;
        }
        floodfill2(grid2, grid, i + 1, j, mp2);
        floodfill2(grid2, grid, i - 1, j, mp2);
        floodfill2(grid2, grid, i, j + 1, mp2);
        floodfill2(grid2, grid, i, j - 1, mp2);
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        int N = grid2.size();
        int M = grid2[0].size();
        int index = 2;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid2[i][j] == 1)
                {
                    floodfill(grid2, i, j, index);
                    index++;
                }
            }
        }
        N = grid1.size();
        M = grid1[0].size();
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid1[i][j] == 1)
                {
                    unordered_map<int, int> mp2;
                    floodfill2(grid2, grid1, i, j, mp2);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    auto ans = s.countSubIslands();
    return 0;
}
