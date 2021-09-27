
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
    {
        vector<int> indeg(n);
        vector<int> visited(n, 0);
        if (n == 2)
            return {edges[0][0], edges[0][1]};
        vector<vector<int>> adj(n);
        for (auto edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
            indeg[edge[0]]++;
            indeg[edge[1]]++;
        }
        int count = 0;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indeg[i] == 1)
            {
                q.push(i);
            }
        }
        int rem = n;
        while (!q.empty() && rem > 2)
        {
            int s = q.size();
            while (s--)
            {
                int tp = q.front();
                q.pop();
                visited[tp] = 1;
                rem--;
                for (int ad : adj[tp])
                {
                    if (!visited[ad])
                    {
                        indeg[ad]--;
                        if (indeg[ad] == 1)
                            q.push(ad);
                    }
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
            if (visited[i] == 0)
                ans.push_back(i);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
