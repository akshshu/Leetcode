
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
