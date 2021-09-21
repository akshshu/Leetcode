
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
    TreeNode *recurs(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if ((root->val >= p->val and root->val <= q->val) || (root->val <= p->val and root->val >= q->val))
        {
            return root;
        }
        if (root->val > p->val and root->val > q->val)
        {
            if (!root->left)
                return root;
            return recurs(root->left, p, q);
        }
        if (!root->right)
            return root;
        return recurs(root->right, p, q);
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        return recurs(root, p, q);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
