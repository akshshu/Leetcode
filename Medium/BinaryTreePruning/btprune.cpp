
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    TreeNode *pruneTree(TreeNode *root)
    {
        if (!root)
            return nullptr;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if (!root->left and !root->right)
        {
            if (root->val == 0)
                return nullptr;
        }
        return root;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
