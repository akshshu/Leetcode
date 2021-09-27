
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool recurs(int src, vector<vector<int>> &adj, vector<bool> &hasApple, vector<int> &visited, int &count)
    {
        bool subtract = true;
        visited[src] = 1;
        for (int ad : adj[src])
        {
            if (visited[ad] == 0)
            {
                bool temp = recurs(ad, adj, hasApple, visited, ++count);
                if (!temp)
                    count++;
                else
                    count--;
                subtract = subtract and temp;
            }
        }
        if (hasApple[src])
            return false;
        return subtract;
    }
    int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
    {
        vector<vector<int>> adj(n);
        for (auto edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> visited(n, 0);
        int count = 0;
        auto temp = recurs(0, adj, hasApple, visited, count);
        return count;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
