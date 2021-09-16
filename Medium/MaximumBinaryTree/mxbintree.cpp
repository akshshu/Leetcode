
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        vector<TreeNode *> stk;
        for (int i = 0; i < nums.size(); ++i)
        {
            TreeNode *cur = new TreeNode(nums[i]);
            while (!stk.empty() && stk.back()->val < nums[i])
            {
                cur->left = stk.back();
                stk.pop_back();
            }
            if (!stk.empty())
                stk.back()->right = cur;
            stk.push_back(cur);
        }
        return stk.front();
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, 1, 6, 0, 5};
    auto ans = s.constructMaximumBinaryTree(nums);
    return 0;
}
