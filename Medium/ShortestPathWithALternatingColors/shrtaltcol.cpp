
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &red_edges, vector<vector<int>> &blue_edges)
    {
        vector<vector<int>> visited(2, vector<int>(n, 0));
        vector<int> ans(n, INT_MAX);
        vector<vector<int>> adj(n);
        vector<vector<int>> adj2(n);
        for (auto bEd : blue_edges)
            adj[bEd[0]].push_back(bEd[1]);
        for (auto rEd : red_edges)
            adj2[rEd[0]].push_back(rEd[1]);
        int i = 0;
        queue<pair<int, int>> q;
        q.push({1, 0});
        q.push({0, 0});
        visited[0][0] = 1;
        visited[1][0] = 1;
        ans[0] = 0;
        int step = 0;
        while (!q.empty())
        {
            int s = q.size();
            while (s--)
            {
                auto tp = q.front();
                q.pop();
                ans[tp.second] = min(ans[tp.second], step);
                if (tp.first == 0)
                {
                    for (int ad : adj[tp.second])
                    {
                        if (!visited[abs(tp.first - 1)][ad])
                        {
                            visited[abs(tp.first - 1)][ad] = 1;
                            q.push({abs(tp.first - 1), ad});
                        }
                    }
                }
                else
                {
                    for (int ad : adj2[tp.second])
                    {
                        if (!visited[abs(tp.first - 1)][ad])
                        {
                            visited[abs(tp.first - 1)][ad] = 1;
                            q.push({abs(tp.first - 1), ad});
                        }
                    }
                }
            }
            step++;
        }
        for (int i = 0; i < n; i++)
            if (ans[i] == INT_MAX)
                ans[i] = -1;
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
