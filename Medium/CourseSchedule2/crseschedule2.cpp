
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> indeg(numCourses);
        queue<int> q;
        vector<vector<int>> adj(numCourses);
        for (auto x : prerequisites)
        {
            adj[x[1]].push_back(x[0]);
            indeg[x[0]]++;
        }
        for (int i = 0; i < numCourses; i++)
        {
            if (indeg[i] == 0)
                q.push(i);
        }
        vector<int> ans;
        while (!q.empty())
        {
            int tp = q.front();
            ans.push_back(tp);
            q.pop();
            for (int x : adj[tp])
            {
                indeg[x]--;
                if (indeg[x] == 0)
                    q.push(x);
            }
        }
        if (ans.size() == numCourses)
            return ans;
        return {};
    }
};
int main()
{
    Solution s;
    vector<vector<int>> s1 = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};
    auto ans = s.findOrder(s1);
    return 0;
}
