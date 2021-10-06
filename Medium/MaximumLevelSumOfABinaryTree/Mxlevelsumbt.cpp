
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
    int maxLevelSum(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int ans = INT_MIN;
        int ans_level = -1;
        int level = 0;
        while (!q.empty())
        {
            int s = q.size();
            int currSum = 0;
            level++;
            while (s--)
            {
                TreeNode *node = q.front();
                q.pop();
                currSum += node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            if (currSum > ans)
            {
                ans_level = level;
                ans = currSum;
            }
        }
        return ans_level;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
