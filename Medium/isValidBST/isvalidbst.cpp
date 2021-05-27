class Solution
{
public:
    vector<int> order;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);
        order.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode *root)
    {
        inorder(root);
        for (int i = 0; i < order.size() - 1; i++)
        {
            if (order[i] >= order[i + 1])
                return false;
        }
        return true;
    }
};