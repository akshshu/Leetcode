
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<pair<int, int>, pair<int, int>>> pp;
class Solution
{
public:
    int minCostConnectPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        if (n == 1)
            return 0;
        vector<vector<pair<int, int>>> adj(points.size());
        vector<int> visited(points.size(), 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(n, INT_MAX);
        dist[0] = 0;
        for (int i = 0; i < points.size(); i++)
        {
            for (int j = i + 1; j < points.size(); j++)
            {
                int dist = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                adj[i].push_back({j, dist});
                adj[j].push_back({i, dist});
            }
        }
        pq.push({dist[0], 0});
        int ans = 0;
        while (!pq.empty())
        {
            auto tp = pq.top();
            pq.pop();
            if (visited[tp.second])
                continue;
            visited[tp.second] = 1;
            ans += tp.first;
            for (auto x : adj[tp.second])
            {
                if (!visited[x.first] and x.second < dist[x.first])
                {
                    dist[x.first] = x.second;
                    pq.push({dist[x.first], x.first});
                }
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> points = {{3, 12}, {-2, 5}, {-4, 1}};
    auto ans = s.minCostConnectPoints(points);
    return 0;
}
