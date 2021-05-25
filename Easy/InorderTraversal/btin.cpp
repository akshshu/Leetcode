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
    vector<int> ans;
    // vector<int> inorderTraversal(TreeNode *root)
    // {
    //     if (root == nullptr)
    //         return {};
    //     if (root->left)
    //         inorderTraversal(root->left);
    //     ans.push_back(root->val);
    //     if (root->right)
    //         inorderTraversal(root->right);
    //     return ans;
    // }

    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        TreeNode *current = root;
        while (current != nullptr || !st.empty())
        {
            while (current != nullptr)
            {
                st.push(current);
                current = current->left;
            }
            current = st.top();
            st.pop();
            ans.push_back(current->val);
            current = current->right;
        }
        return ans;
    }
};