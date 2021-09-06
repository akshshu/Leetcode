
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<pair<int, int>>> adj(n);
        vector<int> stepStatus(n, INT_MAX);
        for (auto f : flights)
            adj[f[0]].push_back({f[1], f[2]});
        pq.push({0, src, 0});
        while (!pq.empty())
        {
            auto x = pq.top();
            pq.pop();
            if (x[1] == dst)
                return x[0];
            if (x[2] > k)
                continue;
            if (stepStatus[x[1]] != INT_MAX and stepStatus[x[1]] < x[2])
                continue;
            stepStatus[x[1]] = x[2];
            for (auto y : adj[x[1]])
                pq.push({x[0] + y.second, y.first, x[2] + 1});
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
