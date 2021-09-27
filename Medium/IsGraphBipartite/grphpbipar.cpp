
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> colors(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (colors[i] != -1)
                continue;
            colors[i] = 1;
            queue<int> q;
            q.push(i);
            while (!q.empty())
            {
                int size = q.size();
                while (size--)
                {
                    int tp = q.front();
                    q.pop();
                    for (auto adj : graph[tp])
                    {
                        if (colors[adj] == -1)
                        {
                            colors[adj] = abs(colors[tp] - 1);
                            q.push(adj);
                        }
                        else if (colors[tp] == colors[adj])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
