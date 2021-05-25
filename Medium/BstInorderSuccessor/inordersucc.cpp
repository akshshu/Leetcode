
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
    /*
     * @param root: The root of the BST.
     * @param p: You need find the successor node of p.
     * @return: Successor of p.
     */

    TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p)
    {
        if (!root)
            return nullptr;
        if (p->right)
        {
            p = p->right;
            while (p->left != nullptr)
            {
                p = p->left;
            }
            return p;
        }
        TreeNode *succ = nullptr;
        while (root != nullptr)
        {
            if (p->val >= root->val)
            {
                root = root->right;
            }
            else
            {
                succ = root;
                root = root->left;
            }
        }

        return succ;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
