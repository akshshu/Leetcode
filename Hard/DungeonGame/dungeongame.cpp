
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calculateMinimumHP(vector<vector<int>> &dungeon)
    {
        int n = dungeon.size();
        int m = dungeon[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        int x = 0;
        int reservedDist = dungeon[0][0];
        if (reservedDist <= 0)
        {
            x = abs(0 - dungeon[0][0]) + 1;
            reservedDist = x + dungeon[0][0];
        }
        int ans = x;
        pq.push({x, 0, 0, reservedDist});
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        vector<vector<int>> visited(n, vector<int>(m, 0));
        dist[0][0] = reservedDist;
        int ans = INT_MAX;
        while (!pq.empty())
        {
            auto tp = pq.top();
            pq.pop();
            if (tp[1] == n - 1 and tp[2] == m - 1)
            {
                ans = min(tp[0], ans);
            }
            if (visited[tp[1]][tp[2]])
                continue;
            visited[tp[1]][tp[2]] = 1;
            if (tp[1] + 1 < n)
            {
                int temp = reservedDist + dungeon[tp[1] + 1][tp[2]];
                if (temp <= 0)
                {
                    int xtoadd = abs(0 - temp) + 1;
                    if (xtoadd >= dist[tp[1] + 1][tp[2]])
                        continue;
                    temp = xtoadd + dungeon[tp[1] + 1][tp[1]];
                    dist[tp[1] + 1][tp[2]] = xtoadd;
                    pq.push({xtoadd, tp[1] + 1, tp[2], temp});
                }
                else
                {
                    if (tp[0] >= dist[tp[1] + 1][tp[2]])
                        continue;
                    dist[tp[1] + 1][tp[2]] = tp[0];
                    pq.push({tp[0], tp[1] + 1, tp[2], temp});
                }
            }
            if (tp[2] + 1 < m)
            {
                int temp = reservedDist + dungeon[tp[1]][tp[2] + 1];
                if (temp <= 0)
                {
                    int xtoadd = abs(0 - temp) + 1;
                    if (xtoadd >= dist[tp[1]][tp[2] + 1])
                        continue;
                    temp = xtoadd + dungeon[tp[1]][tp[2] + 1];
                    dist[tp[1]][tp[2] + 1] = xtoadd;
                    pq.push({xtoadd, tp[1], tp[2] + 1, temp});
                }
                else
                {
                    dist[tp[1]][tp[2] + 1] = tp[0];
                    pq.push({tp[0], tp[1], tp[2] + 1, temp});
                }
            }
        }
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
