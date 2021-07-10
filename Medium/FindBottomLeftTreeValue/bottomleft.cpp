
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int level = -1;
    int ans;
    void recurs(TreeNode *root, int currlevel)
    {
        if (!root)
            return;
        if (currlevel > level)
        {
            ans = root->val;
            level = currlevel;
        }
        recurs(root->left, currlevel + 1);
        recurs(root->right, currlevel + 1);
    }
    int findBottomLeftValue(TreeNode *root)
    {
        recurs(root, 0);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.findBottomLeftValue();
    return 0;
}
