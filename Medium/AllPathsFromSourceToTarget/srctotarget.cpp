
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> curr;
    void recurs(int x, vector<vector<int>> &graph)
    {
        curr.push_back(x);
        if (x == graph.size() - 1)
            ans.push_back(curr);
        else
        {
            for (int y : graph[x])
                recurs(y, graph);
        }
        curr.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        recurs(0, graph);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> graph = {{1, 2}, {3}, {3}, {}};
    auto ans = s.allPathsSourceTarget(graph);
    return 0;
}
