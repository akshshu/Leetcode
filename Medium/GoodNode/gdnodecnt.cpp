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
    int count = 0;
    void countNode(TreeNode *root, int prevVal)
    {
        if (root == nullptr)
            return;
        if (root->val < prevVal)
        {
            countNode(root->left, prevVal);
            countNode(root->right, prevVal);
        }
        else
        {
            count++;
            countNode(root->left, root->val);
            countNode(root->right, root->val);
        }
    }
    int goodNodes(TreeNode *root)
    {
        countNode(root, -100000);
        return count;
    }
};