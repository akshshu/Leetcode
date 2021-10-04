
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int groupCount;
    int find(int val, vector<int> &parent)
    {
        if (parent[val] == -1)
            return val;
        parent[val] = find(parent[val], parent);
        return parent[val];
    }
    void unify(int id, int id2, vector<int> &parent, vector<int> &rank)
    {
        int root1 = find(id, parent);
        int root2 = find(id2, parent);
        if (root1 == root2)
            return;
        groupCount--;
        if (rank[root1] > rank[root2])
            parent[root2] = root1;
        else if (rank[root2] > rank[root1])
            parent[root1] = root2;
        else
        {
            parent[root1] = root2;
            rank[root1]++;
        }
    }
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        int n = accounts.size();
        groupCount = n;
        vector<int> parent(n, -1);
        vector<int> rank(n, 0);
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            auto account = accounts[i];
            for (int j = 1; j < account.size(); j++)
            {
                auto email = account[j];
                if (mp.find(email) == mp.end())
                    mp[email] = i;
                else
                    unify(mp[email], i, parent, rank);
            }
        }
        vector<vector<string>> ans(groupCount);
        unordered_map<int, int> groupId2id;
        int nextId = 0;
        for (auto m : mp)
        {
            string email = m.first;
            int groupId = find(m.second, parent);
            if (groupId2id.find(groupId) == groupId2id.end())
            {
                groupId2id[groupId] = nextId;
                string name = accounts[groupId][0];
                ans[nextId].push_back(name);
                ans[nextId].push_back(email);
                nextId++;
            }
            else
            {
                ans[groupId2id[groupId]].push_back(email);
            }
        }
        for (int i = 0; i < groupCount; i++)
        {
            vector<string> &emailvex = ans[i];
            sort(emailvex.begin() + 1, emailvex.end());
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
