
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    bool recurs(TreeNode *root, TreeNode *node, vector<TreeNode *> &list)
    {
        if (root == nullptr)
            return false;
        list.push_back(root);
        if (root == node)
            return true;
        if (recurs(root->left, node, list) || recurs(root->right, node, list))
            return true;
        else
            list.pop_back();
        return false;
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        vector<TreeNode *> list1;
        vector<TreeNode *> list2;
        bool temp = recurs(root, p, list1);
        temp = recurs(root, q, list2);
        int n = list1.size() - 1, m = list2.size() - 1;
        int i = 0, j = 0;
        TreeNode *ans = nullptr;
        while (i <= n and j <= m)
        {
            if (list1[i] != list2[j])
                return ans;
            else
                ans = list1[i];
            i++;
            j++;
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
