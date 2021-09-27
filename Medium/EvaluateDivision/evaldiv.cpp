
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<string, vector<pair<string, double>>> mp;
    double findSolution(string &src, string &target, double value, unordered_map<string, int> &visited)
    {
        visited[src] = 1;
        if (src == target)
            return value;
        for (auto adj : mp[src])
        {
            if (visited[adj.first] == 0)
            {
                double ans = findSolution(adj.first, target, value * adj.second, visited);
                if (ans != -1)
                    return ans;
            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        for (int i = 0; i < equations.size(); i++)
        {
            mp[equations[i][0]].push_back({equations[i][1], values[i]});
            mp[equations[i][1]].push_back({equations[i][0], 1.0 / values[i]});
        }

        vector<double> ans;
        for (auto query : queries)
        {
            string src = query[0];
            string target = query[1];
            unordered_map<string, int> visited;
            double sol = -1;
            if (mp.find(src) != mp.end())
                sol = findSolution(src, target, 1, visited);
            ans.push_back(sol);
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
