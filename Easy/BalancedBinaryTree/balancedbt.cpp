
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
    bool ans = true;
    int recurs(TreeNode *root)
    {
        if (!root)
            return 0;
        int leftH = recurs(root->left);
        int rightH = recurs(root->right);
        if (abs(leftH - rightH) > 1)
            ans = false;
        return 1 + max(leftH, rightH);
    }
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;
        int h = recurs(root);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
