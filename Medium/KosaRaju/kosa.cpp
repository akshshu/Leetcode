#include <bits/stdc++.h>
using namespace std;
class KosaRaju
{
public:
    vector<vector<int>> adj;
    vector<vector<int>> revadj;
    vector<int> visited;
    vector<int> visited2;
    stack<int> st;
    void dfs(int node)
    {
        visited[node] = 1;
        for (int ad : adj[node])
            if (!visited[ad])
                dfs(ad);
        st.push(node);
    }
    void dfs2(int node)
    {
        visited2[node] = 1;
        for (int ad : revadj[node])
            if (!visited2[ad])
                dfs2(ad);
    }
    vector<int> KsRaju(vector<vector<int>> &edges, int n)
    {
        adj = vector<vector<int>>(n);
        revadj = vector<vector<int>>(n);
        visited = vector<int>(n, 0);
        visited2 = vector<int>(n, 0);
        vector<int> ans;
        for (auto edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            revadj[edge[1]].push_back(edge[0]);
        }
        for (int i = 0; i < n; i++)
        {
            if (visited[i])
                continue;
            dfs(i);
        }
        while (!st.empty())
        {
            int tp = st.top();
            st.pop();
            if (visited2[tp])
                continue;
            dfs2(tp);
            ans.push_back(tp);
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}, {2, 3}, {4, 5}, {5, 3}, {3, 4}};
    KosaRaju ks;
    auto ans = ks.KsRaju(edges, 6);
    cout << ans.size();
    return 0;
}