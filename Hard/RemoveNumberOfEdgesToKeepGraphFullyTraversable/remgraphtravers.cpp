
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool customSort(vector<int> &a, vector<int> &b)
    {
        if (a[0] > b[0])
            return true;
        return false;
    }
    int find(int el, vector<int> &parent)
    {
        if (parent[el] == -1)
            return el;
        parent[el] = find(parent[el], parent);
        return parent[el];
    }
    void unions(int root1, int root2, vector<int> &parent, vector<int> &rank)
    {
        if (rank[root1] > rank[root2])
            parent[root2] = root1;
        else if (rank[root2] > rank[root1])
            parent[root1] = root2;
        else
        {
            parent[root1] = root2;
            rank[root2]++;
        }
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>> &edges)
    {
        sort(edges.begin(), edges.end(), customSort);
        vector<int> ParentRed(n + 1, -1);
        vector<int> ParentGreen(n + 1, -1);
        vector<int> CostRed(n + 1, 0);
        vector<int> CostGreen(n + 1, 0);
        int totalEdge = 0;
        for (auto edge : edges)
        {
            int type = edge[0];
            int point1 = edge[1];
            int point2 = edge[2];
            if (type == 3)
            {
                int root1 = find(point1, ParentRed);
                int root2 = find(point2, ParentRed);
                if (root1 == root2)
                    continue;
                unions(root1, root2, ParentRed, CostRed);
                root1 = find(point1, ParentGreen);
                root2 = find(point2, ParentGreen);
                if (root1 == root2)
                    continue;
                unions(root1, root2, ParentGreen, CostGreen);
                totalEdge++;
            }
            else if (type == 2)
            {
                int root1 = find(point1, ParentGreen);
                int root2 = find(point2, ParentGreen);
                if (root1 != root2)
                {
                    totalEdge++;
                    unions(root1, root2, ParentGreen, CostGreen);
                }
            }
            else if (type == 1)
            {
                int root1 = find(point1, ParentRed);
                int root2 = find(point2, ParentRed);
                if (root1 != root2)
                {
                    totalEdge++;
                    unions(root1, root2, ParentRed, CostRed);
                }
            }
        }
        int p1 = 1;
        int p2 = 1;
        for (int i = 1; i < n + 1; i++)
        {
            if (ParentRed[i] != -1)
                p1++;
            if (ParentGreen[i] != -1)
                p2++;
        }
        if (p1 != n || p2 != n)
            return -1;
        return edges.size() - totalEdge;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
