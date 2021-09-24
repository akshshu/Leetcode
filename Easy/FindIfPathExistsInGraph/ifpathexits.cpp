
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, vector<int>> adjacency;
    bool ifPathExist(int current, int &end, int &n, vector<int> &visited)
    {
        if (current == end)
            return true;
        visited[current] = 1;
        for (auto x : adjacency[current])
        {
            if (!visited[x])
                if (ifPathExist(x, end, n, visited))
                    return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>> &edges, int start, int end)
    {
        vector<int> visited(n, 0);
        for (auto edge : edges)
        {
            adjacency[edge[0]].push_back(edge[1]);
            adjacency[edge[1]].push_back(edge[0]);
        }
        return ifPathExist(start, end, n, visited);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
