#include <bits/stdc++.h>
using namespace std;
class Tarjan
{
public:
    void dfs(int node, vector<int> &parent, vector<int> &low, vector<int> &disc, vector<vector<int>> &adj, vector<bool> &ans)
    {
        static int timer = 0;
        low[node] = disc[node] = timer;
        timer++;
        int children = 0;
        for (int ad : adj[node])
        {
            if (disc[ad] == -1)
            {
                children++;
                parent[ad] = node;
                dfs(ad, parent, low, disc, adj, ans);
                low[node] = min(low[node], low[ad]);
                if (parent[node] != -1 and low[ad] > disc[node])
                    ans[node] = true;
                if (parent[node] == -1 and children > 1)
                    ans[node] = true;
            }
            else
            {
                if (parent[node] != ad)
                {
                    low[node] = min(low[node], disc[ad]);
                }
            }
        }
    }
    vector<int> AP(vector<vector<int>> &edges, int n)
    {
        vector<vector<int>> adj(n);
        for (auto ed : edges)
        {
            adj[ed[0]].push_back(ed[1]);
            adj[ed[1]].push_back(ed[0]);
        }
        vector<int> parent(n, -1);
        vector<int> disc(n, -1);
        vector<int> low(n, -1);
        vector<bool> ans(n, false);
        for (int i = 0; i < n; i++)
        {
            if (disc[i] == -1)
                dfs(i, parent, low, disc, adj, ans);
        }
        vector<int> aps;
        for (int i = 0; i < n; i++)
            if (ans[i])
                aps.push_back(i);
        return aps;
    }
};
int main()
{

    vector<vector<int>> edges = {{5, 4}, {0, 1}, {3, 1}, {1, 2}, {3, 4}, {3, 3}, {0, 1}, {1, 2}, {2, 0}};
    Tarjan tj;
    auto ans = tj.AP(edges, 6);
    for (auto an : ans)
    {
        cout << an << " ";
    }
    return 0;
}