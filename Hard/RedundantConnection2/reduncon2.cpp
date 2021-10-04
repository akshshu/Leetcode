
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int find(vector<int> &parent, int el)
    {
        if (parent[el] == -1)
            return el;
        parent[el] = find(parent, parent[el]);
        return parent[el];
    }
    void unions(int root1, int root2, vector<int> &rank, vector<int> &parent)
    {
        if (rank[root1] > rank[root2])
            parent[root2] = root1;
        else if (rank[root2] > rank[root1])
            parent[root1] = root2;
        else
        {
            parent[root1] = root2;
            rank[root1]++;
        }
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>> &edges)
    {
        vector<int> ans = {-1, -1};
        int n = edges.size();
        vector<int> parent(n + 1, -1);
        vector<int> rank(n + 1, 0);
        vector<int> indegree(n + 1, -1);
        int b1 = -1;
        int b2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (indegree[edges[i][1]] != -1)
            {
                b1 = indegree[edges[i][1]];
                b2 = i;
            }
            indegree[edges[i][1]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == b2)
                continue;
            int root1 = find(parent, edges[i][0]);
            int root2 = find(parent, edges[i][1]);
            if (root1 == root2)
            {
                if (b2 == -1)
                    return {edges[i][0], edges[i][1]};
                return {edges[b1][0], edges[b1][1]};
            }
            unions(root1, root2, rank, parent);
        }
        return {edges[b2][0], edges[b2][1]};
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
