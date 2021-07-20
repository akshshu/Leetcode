
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
    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        int a = 0;
        if (!root)
            return root;
        if (root->left == nullptr and root->right == nullptr)
            return (root->val == target) ? nullptr : root;
        if (root->val == target)
            a = 1;
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);
        return (a && !root->left && !root->right) ? nullptr : root;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
