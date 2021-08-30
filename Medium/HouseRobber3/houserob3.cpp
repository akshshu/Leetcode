
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    unordered_map<TreeNode *, int> dp;
    int rob(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        if (dp.find(root) != dp.end())
            return dp[root];
        int a = 0, b = 0;
        if (root->left)
        {
            a = rob(root->left->left) + rob(root->left->right);
        }
        if (root->right)
        {
            b = rob(root->right->left) + rob(root->right->right);
        }

        dp[root] = max(root->val + a + b, rob(root->left) + rob(root->right));
        return dp[root];
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
