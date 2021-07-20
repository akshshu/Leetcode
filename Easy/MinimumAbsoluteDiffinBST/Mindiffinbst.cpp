
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
    int firstMin = 0, secondMin = 0;
    vector<int> list;
    void recurs(TreeNode *root)
    {
        if (!root)
            return;
        recurs(root->left);
        list.push_back(root->val);
        recurs(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {

        recurs(root);
        // sort(list.begin(),list.end());
        int ans = INT_MAX;
        for (int i = 1; i < list.size(); i++)
        {
            ans = min(ans, abs(list[i] - list[i - 1]));
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
