
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countServers(vector<vector<int>> &grid)
    {
        int count = 0;
        vector<int> row(grid.size(), 0);
        vector<int> col(grid[0].size(), 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j])
                {

                    row[i]++;
                    col[j]++;
                    count++;
                }
            }
        }

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                    continue;
                int neighbour = 0;
                if (row[i] > 1)
                    neighbour = 1;
                if (col[j] > 1)
                    neighbour = 1;
                if (neighbour == 0)
                    count--;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> grid = {{1, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    auto ans = s.countServers(grid);
    return 0;
}
