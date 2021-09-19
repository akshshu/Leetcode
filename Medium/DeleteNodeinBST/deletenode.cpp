
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
    int getMax(TreeNode *node)
    {
        while (node->right)
        {
            node = node->right;
        }
        return node->val;
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (!root)
            return nullptr;
        if (root->val > key)
            root->left = deleteNode(root->left, key);
        else if (root->val < key)
            root->right = deleteNode(root->right, key);
        else
        {
            if (root->left and root->right)
            {
                int Max = getMax(root->left);
                root->val = Max;
                root->left = deleteNode(root->left, Max);
                return root;
            }
            if (root->left)
                return root->left;
            if (root->right)
                return root->right;
            else
            {
                return nullptr;
            }
        }
        return root;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
