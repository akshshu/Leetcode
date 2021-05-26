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
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        //Doing traversal
        if (!original)
            return nullptr;
        stack<TreeNode *> st;
        stack<TreeNode *> st2;
        st.push(original);
        st2.push(cloned);
        while (!st.empty())
        {
            TreeNode *temp = st.top();
            TreeNode *temp2 = st2.top();
            if (temp == target)
                return st2.top();
            st.pop();
            st2.pop();
            if (temp->right)
            {
                st.push(temp->right);
                st2.push(temp2->right);
            }
            if (temp->left)
            {
                st.push(temp->left);
                st2.push(temp2->left);
            }
        }
        return nullptr;
    }
};