
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
    {
        //floyd warshall
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; i++)
            dist[i][i] = 0;
        for (auto edge : edges)
        {
            dist[edge[0]][edge[1]] = edge[2];
            dist[edge[1]][edge[0]] = edge[2];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int p = 0; p < n; p++)
                {
                    if (dist[j][i] == INT_MAX || dist[i][p] == INT_MAX)
                        continue;
                    dist[j][p] = min(dist[j][p], dist[i][j] + dist[p][i]);
                }
            }
        }
        int ans = -1;
        int minCount = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (dist[i][j] <= distanceThreshold)
                    count++;
            }
            if (count <= minCount)
            {
                ans = i;
                minCount = count;
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
