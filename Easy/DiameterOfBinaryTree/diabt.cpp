
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans = 0;
    int calc(TreeNode *root)
    {
        int left = 0;
        int right = 0;
        if (root->left)
            left = 1 + calc(root->left);
        if (root->right)
            right = 1 + calc(root->right);
        ans = max(ans, left + right);
        return max(left, right);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int temp = calc(root);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
