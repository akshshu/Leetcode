
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double maxProbability(int n, vector<vector<int>> &edges, vector<double> &succProb, int start, int end)
    {
        vector<double> prob(n, 0);
        vector<int> visited(n, 0);
        vector<vector<pair<int, double>>> adj(n);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        priority_queue<pair<double, int>> q;
        q.push({1, start});
        prob[start] = 1;
        while (!q.empty())
        {
            auto tp = q.top();
            visited[tp.second] = 1;
            q.pop();
            for (auto ad : adj[tp.second])
            {
                if (visited[ad.first] == 0 and prob[ad.first] < tp.first * ad.second)
                {
                    prob[ad.first] = tp.first * ad.second;
                    q.push({prob[ad.first], ad.first});
                }
            }
        }
        if (visited[end] == 0)
            return 0;
        return prob[end];
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
