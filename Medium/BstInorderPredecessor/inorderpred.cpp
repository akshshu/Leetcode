/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution
{
public:
    /**
     * @param root: the given BST
     * @param p: the given node
     * @return: the in-order predecessor of the given node in the BST
     */
    TreeNode *inorderPredecessor(TreeNode *root, TreeNode *p)
    {
        // write your code here
        if (root == nullptr)
            return nullptr;
        if (p->left)
        {
            p = p->left;
            while (p->right)
            {
                p = p->right;
            }
            return p;
        }
        TreeNode *pred = nullptr;
        while (root != nullptr)
        {
            if (p->val <= root->val)
                root = root->left;
            else
            {
                pred = root;
                root = root->right;
            }
        }
        return pred;
    }
};