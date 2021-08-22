
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // vector<vector<pair<long long,long long>>>adj;
    // vector<long long>count;
    // vector<long long>dist;
    // int mod = 1e9 + 7;

    int countPaths(int n, vector<vector<int>> &roads)
    {
        vector<long long> count(n, 0);
        vector<long long> dist(n, LLONG_MAX);
        vector<vector<pair<long long, long long>>> adj(n);
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        for (auto x : roads)
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        dist[0] = 0;
        pq.push({0, 0});
        count[0] = 1;
        while (!pq.empty())
        {
            auto tp = pq.top();
            pq.pop();
            for (auto y : adj[tp.second])
            {
                if (dist[y.first] > tp.first + y.second)
                {
                    dist[y.first] = tp.first + y.second;
                    pq.push({dist[y.first], y.first});
                    count[y.first] = count[tp.second];
                }
                else
                {
                    if (dist[y.first] == tp.first + y.second)
                    {
                        count[y.first] += count[tp.second];
                        count[y.first] %= 1000000007;
                    }
                }
            }
        }
        return count[n - 1];
    }
};
int main()
{
    Solution s;
    int n = 2;
    vector<vector<int>> roads = {{1, 0, 10}};
    auto ans = s.countPaths(n, roads);
    return 0;
}
