
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestPath(vector<vector<int>> &grid, int k)
    {
        int m = (int)grid.size(), n = (int)grid[0].size();
        int visited[40][40][1601] = {};
        const int d[5] = {0, -1, 0, 1, 0};

        queue<vector<int>> q;
        q.push({0, 0, 0}); // (start point_x, start point_y, obstacles encountered)
        int steps = 0;

        while (!q.empty())
        {
            int sz = (int)q.size();
            while (sz--)
            {
                auto p = q.front();
                q.pop();
                int i = p[0], j = p[1], obs = p[2];
                if (p[0] == m - 1 and p[1] == n - 1)
                { //if reached at end, return the steps travelled
                    return steps;
                }
                for (int a = 0; a < 4; a++)
                {                                                     //check for neighbours
                    int ni = i + d[a], nj = j + d[a + 1], nobs = obs; //new values of neighbours
                    if (ni >= 0 and nj >= 0 and ni < m and nj < n)
                    {
                        if (grid[ni][nj] == 1)
                        {           //if neighbour is an obstacle
                            nobs++; //increment new obstacle count
                        }
                        if (nobs <= k and !visited[ni][nj][nobs])
                        {                                 //if the cell is not yet visited (also we're checking obstacle count for  every co-ordinate) i.e. ifobstacle count is different then path is different
                            visited[ni][nj][nobs] = true; //mark this path
                            q.push({ni, nj, nobs});       //and insert it for next iteration
                        }
                    }
                }
            }
            steps++;
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
