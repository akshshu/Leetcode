
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> distance;
    vector<int> count;
    void dfs1(int root, vector<vector<int>> &adj, int parent)
    {
        for (int child : adj[root])
        {
            if (child == parent)
                continue;
            dfs1(child, adj, root);
            count[root] += count[child]; //taking count of child
            distance[root] += distance[child] + count[child];
        }
        count[root]++; //counts itself
    }
    void dfs2(int root, vector<vector<int>> &adj, int parent)
    {
        for (int child : adj[root])
        {
            if (child == parent)
                continue;
            distance[child] = distance[root] - count[child] + (count.size() - count[child]);
            dfs2(child, adj, root);
        }
        count[root]++; //counts itself
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(n);
        distance = vector<int>(n, 0);
        count = vector<int>(n, 0);
        for (auto edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        dfs1(0, adj, 0);
        dfs2(0, adj, 0);
        return distance;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
