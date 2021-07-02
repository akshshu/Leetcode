
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
    TreeNode *previous, *wrong1, *wrong2;
    void _recoverTree(TreeNode *root)
    {
        if (root->left)
            _recoverTree(root->left);
        if (previous && root->val < previous->val)
        {
            if (!wrong1)
                wrong1 = previous;
            wrong2 = root;
        }
        previous = root;
        if (root->right)
            _recoverTree(root->right);
    }
    void recoverTree(TreeNode *root)
    {
        _recoverTree(root);
        swap(wrong1->val, wrong2->val);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
