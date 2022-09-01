
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int BSTGST(TreeNode *root, int sum)
    {
        if (!root)
            return sum;
        root->val = root->val + BSTGST(root->right, sum);
        return BSTGST(root->left, root->val);
    }
    TreeNode *bstToGst(TreeNode *root)
    {
        int temp = BSTGST(root, 0);
        return root;
    }
};
int main()
{
    Solution s;
    auto ans = s.bstToGst();
    return 0;
}
