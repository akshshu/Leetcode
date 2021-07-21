
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
    TreeNode *parent1 = nullptr;
    int level1;
    bool ans = false;
    void recurs(TreeNode *root, int x, int y, TreeNode *parent, int level)
    {
        if (!root)
            return;
        recurs(root->left, x, y, root, level + 1);
        recurs(root->right, x, y, root, level + 1);
        if (root->val == x || root->val == y)
        {
            if (parent1)
            {
                if (parent != parent1 && level == level1)
                    ans = true;
                else
                    ans = false;
            }
            else
            {
                parent1 = parent;
                level1 = level;
            }
        }
    }

    bool isCousins(TreeNode *root, int x, int y)
    {
        if (!root)
            return false;
        recurs(root->left, x, y, root, 1);
        recurs(root->right, x, y, root, 1);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
