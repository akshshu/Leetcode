
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
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return false;
        if (!root->left and !root->right)
        {
            if (targetSum - root->val == 0)
                return true;
            return false;
        }
        if (root->left)
            if (hasPathSum(root->left, targetSum - root->val))
                return true;
        if (root->right)
            if (hasPathSum(root->right, targetSum - root->val))
                return true;
        return false;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
