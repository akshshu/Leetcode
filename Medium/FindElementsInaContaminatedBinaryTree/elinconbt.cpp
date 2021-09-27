
#include <bits/stdc++.h>
using namespace std;

class FindElements
{
public:
    TreeNode *Myroot = nullptr;
    FindElements(TreeNode *root)
    {
        Myroot = root;
    }
    bool recurs(TreeNode *root, int value, int target)
    {
        if (!root || value > target)
            return false;
        if (value == target)
            return true;
        return (recurs(root->left, 2 * value + 1, target) or recurs(root->right, 2 * value + 2, target));
    }
    bool find(int target)
    {
        return recurs(Myroot, 0, target);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
