
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
    int leftHeight(TreeNode *root)
    {
        if (!root)
            return 0;
        return 1 + leftHeight(root->left);
    }
    int rightHeight(TreeNode *root)
    {
        if (!root)
            return 0;
        return 1 + rightHeight(root->right);
    }
    int countNodes(TreeNode *root)
    {
        int leftH = leftHeight(root);
        int rightH = rightHeight(root);
        if (leftH == rightH)
            return pow(2, leftH) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
