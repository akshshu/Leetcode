
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> ans;
    int recurs(vector<int> &dp, vector<int> &visited, int i, vector<vector<int>> &graph)
    {
        if (dp[i] != -1)
            return dp[i];
        if (graph[i].size() == 0)
            return 1;
        if (visited[i])
            return 0;
        if (!visited[i])
        {
            visited[i] = 1;
            int x = 1;
            for (int t : graph[i])
                x = x & recurs(dp, visited, t, graph);
            dp[i] = x;
        }
        return dp[i];
    }
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        vector<int> visited(graph.size(), 0);
        vector<int> dp(graph.size(), -1);
        for (int i = 0; i < graph.size(); i++)
        {
            if (!visited[i])
                dp[i] = recurs(dp, visited, i, graph);
        }
        for (int i = 0; i < dp.size(); i++)
        {
            if (dp[i] == 1)
                ans.push_back(i);
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
