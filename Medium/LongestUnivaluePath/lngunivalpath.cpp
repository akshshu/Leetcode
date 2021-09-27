
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
    int maxPoint = 1;
    pair<int, int> recurs(TreeNode *root)
    {
        if (!root)
            return {0, -10002};
        pair<int, int> left = recurs(root->left);
        pair<int, int> right = recurs(root->right);
        if (root->val == left.second and root->val == right.second)
        {
            int mx = max(left.first, right.first);
            if (1 + left.first + right.first > maxPoint)
                maxPoint = 1 + left.first + right.first;
            return {1 + mx, root->val};
        }
        if (root->val == left.second)
        {
            if (1 + left.first > maxPoint)
                maxPoint = 1 + left.first;
            return {1 + left.first, root->val};
        }
        if (root->val == right.second)
        {
            if (1 + right.first > maxPoint)
                maxPoint = 1 + right.first;
            return {1 + right.first, root->val};
        }
        return {1, root->val};
    }
    int longestUnivaluePath(TreeNode *root)
    {
        auto temp = recurs(root);
        return maxPoint - 1;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
