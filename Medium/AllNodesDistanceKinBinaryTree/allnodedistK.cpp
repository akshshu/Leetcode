
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<int, vector<int>> adj;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();
            while (s--)
            {
                auto tp = q.front();
                q.pop();
                if (tp->left)
                {
                    adj[tp->val].push_back(tp->left->val);
                    adj[tp->left->val].push_back(tp->val);
                    q.push(tp->left);
                }
                if (tp->right)
                {
                    adj[tp->val].push_back(tp->right->val);
                    adj[tp->right->val].push_back(tp->val);
                    q.push(tp->right);
                }
            }
        }
        vector<int> ans;
        int tr = target->val;
        queue<int> qp;
        qp.push(tr);
        int dist = 0;
        unordered_map<int, int> visited;
        while (!qp.empty())
        {
            int s = qp.size();
            while (s--)
            {
                int tp = qp.front();
                qp.pop();
                if (visited[tp])
                    continue;
                visited[tp] = 1;
                if (dist == k)
                    ans.push_back(tp);
                for (int ad : adj[tp])
                {
                    if (!visited[ad])
                        qp.push(ad);
                }
            }
            dist++;
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
