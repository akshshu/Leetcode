
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    TreeNode *prev = nullptr;
    void flatten(TreeNode *root)
    {
        if (!root)
            return root;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = nullptr;
        prev = root;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
