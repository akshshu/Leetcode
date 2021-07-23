
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
    bool rootVal(TreeNode *root, TreeNode *root2)
    {
        if (root && !root2 || (!root && root2))
            return false;
        if (!root && !root)
            return true;
        if (root->val != root2->val)
            return false;
        return rootVal(root->left, root2->right) && rootVal(root->right, root2->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        return rootVal(root->left, root->right);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
