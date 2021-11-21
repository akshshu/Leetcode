#include <bits/stdc++.h>
using namespace std;
class Tarjan
{
public:
    void dfs(int node, stack<int> &st, vector<bool> &Instack, vector<int> &low, vector<int> &disc, int &timer, vector<vector<int>> &adj, vector<vector<int>> &Comps)
    {
        static int componentNO = 0;
        disc[node] = low[node] = timer;
        Instack[node] = true;
        timer++;
        st.push(node);
        for (int ad : adj[node])
        {
            if (disc[ad] == -1)
            {
                dfs(ad, st, Instack, low, disc, timer, adj, Comps);
                low[node] = min(low[node], low[ad]);
            }
            else
            {
                if (Instack[ad])
                {
                    low[node] = min(low[node], disc[ad]);
                }
            }
        }
        if (low[node] == disc[node])
        {
            Comps.push_back({});
            while (!st.empty() and st.top() != node)
            {
                Comps[componentNO].push_back(st.top());
                st.pop();
                Instack[st.top()] = false;
            }
            Instack[node] = false;
            Comps[componentNO].push_back(st.top());
            st.pop();
            componentNO++;
        }
    }
    vector<vector<int>> SCC(vector<vector<int>> &edges, int n)
    {
        vector<int> low(n, -1);
        vector<int> disc(n, -1);
        vector<vector<int>> adj(n);
        for (auto ed : edges)
            adj[ed[0]].push_back(ed[1]);
        stack<int> st;
        vector<bool> Instack(n, false);
        vector<vector<int>> Comps;
        int timer = 0;
        for (int i = 0; i < n; i++)
        {
            if (disc[i] == -1)
                dfs(i, st, Instack, low, disc, timer, adj, Comps);
        }
        return Comps;
    };
};
int main()
{
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}, {2, 3}, {4, 5}, {5, 3}, {3, 4}};
    Tarjan tj;
    auto ans = tj.SCC(edges, 6);
    for (auto an : ans)
    {
        for (auto el : an)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}