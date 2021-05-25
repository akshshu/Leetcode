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
    vector<int> preorderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return {};
        ans.push_back(root->val);
        if (root->left)
            preorderTraversal(root->left);
        if (root->right)
            preorderTraversal(root->right);
        return ans;
    }
    //--------------------------Iterative preorder-------------------
    // vector<int> preorderTraversal(TreeNode *root)
    // {
    //     if (root == nullptr)
    //         return {};
    //     stack<TreeNode *> st;
    //     st.push(root);
    //     while (!st.empty())
    //     {
    //         TreeNode*node=st.top();
    //         ans.push_back(node->val);
    //         st.pop();
    //         if (node->right)
    //             st.push(node->right);
    //         if (node->left)
    //             st.push(node->left);
    //     }
    // return ans;
    // }
    // Iterative using space equals to height of tree
    // vector<int> preorderTraversal(TreeNode *root)
    // {
    //     if (root == nullptr)
    //         return {};
    //     stack<TreeNode *> st;
    //     st.push(root);
    //     while (!st.empty())
    //     {
    //         TreeNode *node = st.top();
    //         st.pop();
    //         while (node != nullptr)
    //         {
    //             ans.push_back(node->val);
    //             if (node->right)
    //                 st.push(node->right);
    //             node = node->left;
    //         }
    //     }
    //     return ans;
    // }
};