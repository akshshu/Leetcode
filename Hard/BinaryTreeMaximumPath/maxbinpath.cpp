
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
    int result = INT_MIN;
    int getMaxPath(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = getMaxPath(root->left);
        int right = getMaxPath(root->right);
        int m1 = max(max(left, right) + root->val, root->val);
        int m2 = max(m1, root->val + left + right);
        result = max(m2, result);
        return m1;
    }
    int maxPathSum(TreeNode *root)
    {
        int x = getMaxPath(root);
        return result;
    }
};
int main()
{
    Solution s;
    auto ans = s.maxPathSum();
    return 0;
}
