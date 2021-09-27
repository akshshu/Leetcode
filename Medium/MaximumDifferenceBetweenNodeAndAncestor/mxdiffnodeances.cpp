
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
    int ans = INT_MIN;
    pair<int, int> recurs(TreeNode *root)
    {
        if (!root)
            return {INT_MAX, INT_MIN};
        auto leftmm = recurs(root->left);
        auto rightmm = recurs(root->right);
        int maxterm = max(leftmm.second, rightmm.second);
        int minterm = min(leftmm.first, rightmm.first);
        if (minterm == INT_MAX and maxterm == INT_MIN)
            return {root->val, root->val};
        ans = max(ans, max(abs(root->val - maxterm), abs(root->val - minterm)));
        return {min(root->val, minterm), max(root->val, maxterm)};
    }
    int maxAncestorDiff(TreeNode *root)
    {
        auto temp = recurs(root);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
