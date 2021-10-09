
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // int find(int node,vector<int>&parent){
    //     if(parent[node]==-1)
    //         return node;
    //     parent[node]=find(parent[node],parent);
    //     return parent[node];
    // }
    bool possibleBipartition(int n, vector<vector<int>> &dislikes)
    {
        if (dislikes.size() == 0)
            return true;

        vector<int> color(n + 1, -1);
        vector<vector<int>> adj(n + 1);
        for (auto dislike : dislikes)
        {
            adj[dislike[0]].push_back(dislike[1]);
            adj[dislike[1]].push_back(dislike[0]);
        }
        for (int i = 0; i < dislikes.size(); i++)
        {
            if (color[dislikes[i][0]] != -1 || color[dislikes[i][1]] != -1)
                continue;
            queue<pair<int, int>> q;
            q.push({dislikes[i][0], 1});
            color[dislikes[i][0]] = 1;
            while (!q.empty())
            {
                int s = q.size();
                while (s--)
                {
                    auto tp = q.front();
                    q.pop();
                    for (auto ad : adj[tp.first])
                    {
                        if (color[ad] == -1)
                        {
                            color[ad] = abs(tp.second - 1);
                            q.push({ad, abs(tp.second - 1)});
                        }
                        else
                        {
                            if (tp.second == color[ad])
                                return false;
                        }
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
