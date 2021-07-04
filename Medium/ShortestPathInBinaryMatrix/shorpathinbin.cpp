
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
            return -1;
        if (n == 1)
            return 1;
        queue<pair<int, int>> qu;
        qu.push({0, 0});
        grid[0][0] = 1;
        vector<pair<int, int>> indexes = {{1, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int ans = 0;
        while (!qu.empty())
        {
            ans++;
            int s = qu.size();
            while (s--)
            {
                auto top = qu.front();
                qu.pop();
                for (auto x : indexes)
                {
                    int newRow = top.first + x.first;
                    int newCol = top.second + x.second;

                    if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && grid[newRow][newCol] == 0)
                    {
                        if (newRow == n - 1 && newCol == n - 1)
                            return ans + 1;
                        qu.push({newRow, newCol});
                        grid[newRow][newCol] = 1;
                    }
                }
            }
        }

        return -1;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
