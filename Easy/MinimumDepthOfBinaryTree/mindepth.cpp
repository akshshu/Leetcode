
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
    int ans = INT_MAX;
    void recurs(TreeNode *root, int depth)
    {
        if (root->left == nullptr && root->right == nullptr)
            ans = min(ans, depth);
        if (root->left)
            recurs(root->left, depth + 1);
        if (root->right)
            recurs(root->right, depth + 1);
    }
    int minDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        recurs(root, 1);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
