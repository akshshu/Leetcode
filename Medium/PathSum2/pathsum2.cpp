class Solution
{
public:
    vector<vector<int>> ans;
    void recurs(TreeNode *root, vector<int> &ans_part, int currentSum, int targetSum)
    {
        if (root == nullptr)
            return;
        ans_part.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr)
        {
            if (currentSum + root->val == targetSum)
            {
                ans.push_back(ans_part); //Deleting the added element
                ans_part.pop_back();
                return;
            }
        }
        recurs(root->left, ans_part, currentSum + root->val, targetSum);
        recurs(root->right, ans_part, currentSum + root->val, targetSum);
        ans_part.pop_back(); //Incase not reached equaltoTargetSum deleting here
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> ans_part;
        if (!root)
            return {};
        if (targetSum == root->val && root->left == nullptr && root->right == nullptr)
            return {{root->val}};
        ans_part.push_back(root->val);
        recurs(root->left, ans_part, root->val, targetSum);
        recurs(root->right, ans_part, root->val, targetSum);
        return ans;
    }
};