
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
    int recurs(TreeNode *root)
    {
        if (!root)
            return 0;
        return 1 + max(recurs(root->left), recurs(root->right));
    }
    void recurs2(int currLevel, TreeNode *root, vector<int> &sol)
    {
        if (!root)
            return;
        recurs2(currLevel + 1, root->left, sol);
        recurs2(currLevel + 1, root->right, sol);
        sol[currLevel] = root->val;
    }
    vector<int> rightSideView(TreeNode *root)
    {
        if (!root)
            return {};
        int height = 1 + max(recurs(root->left), recurs(root->right));
        vector<int> sol(height, 0);
        recurs2(0, root, sol);
        return sol;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
