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
    int sol = 0;
    void recurs(TreeNode *root, int k)
    {
        if (root == nullptr)
            return;
        k = 10 * k + root->val;
        if (root->left == nullptr && root->right == nullptr)
            sol += k;
        recurs(root->left, k);
        recurs(root->right, k);
    }
    int sumNumbers(TreeNode *root)
    {
        recurs(root, 0);
        return sol;
    }
};
