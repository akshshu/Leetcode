
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<int> time(n + 1, INT_MAX);
        vector<int> visited(n + 1, 0);
        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto x : times)
            adj[x[0]].push_back({x[1], x[2]});
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, k});
        time[k] = 0;
        while (!q.empty())
        {
            auto tp = q.top();
            visited[tp.second] = 1;
            q.pop();
            for (auto ad : adj[tp.second])
            {
                if (visited[ad.first] == 0 and time[ad.first] > tp.first + ad.second)
                {
                    time[ad.first] = tp.first + ad.second;
                    q.push({time[ad.first], ad.first});
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if (visited[i] == 0)
                return -1;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, time[i]);
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
