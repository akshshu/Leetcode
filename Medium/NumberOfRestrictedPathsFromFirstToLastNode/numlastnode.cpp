
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mod = 1e9 + 7;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist;
    vector<int> visited;
    vector<vector<pair<int, int>>> adj;
    int dfs(vector<int> &dp, int n)
    {
        if (n == 1)
            return 1;
        if (dp[n] != -1)
            return dp[n] % mod;
        int ans = 0;
        for (pair<int, int> x : adj[n])
        {
            if (dist[x.first] > dist[n])
                ans = ((ans % mod) + dfs(dp, x.first)) % mod;
        }
        dp[n] = ans;
        return dp[n];
    }
    void dijikstra(int n)
    {
        dist[n] = 0;
        pq.push({0, n});
        while (!pq.empty())
        {
            auto tp = pq.top();
            pq.pop();
            visited[tp.second] = 1;
            for (auto y : adj[tp.second])
            {
                if (!visited[y.first] and dist[y.first] > dist[tp.second] + y.second)
                {
                    dist[y.first] = dist[tp.second] + y.second;
                    pq.push({dist[y.first], y.first});
                }
            }
        }
    }
    int countRestrictedPaths(int n, vector<vector<int>> &edges)
    {
        visited = vector<int>(n + 1, 0);
        dist = vector<int>(n + 1, INT_MAX);
        adj = vector<vector<pair<int, int>>>(n + 1);
        for (auto x : edges)
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        dijikstra(n);
        vector<int> dp(n + 1, -1);
        return dfs(dp, n);
    }
};
int main()
{
    Solution s;

    vector<vector<int>> edges = {{1, 2, 3}, {1, 3, 3}, {2, 3, 1}, {1, 4, 2}, {5, 2, 2}, {3, 5, 1}, {5, 4, 10}};
    int n = 5;
    auto x = s.countRestrictedPaths(n, edges);
    return 0;
}
