
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    TreeNode *prev = nullptr;
    void flatten(TreeNode *root)
    {
        //   -------------------recursive solution O(n)time O(n)space
        // if (!root)
        //     return root;
        // flatten(root->right);
        // flatten(root->left);
        // root->right = prev;
        // root->left = nullptr;
        // prev = root;
        // ---------------------------------------------------

        //----------------------Iterative Solution O(n)time and O(n)space
        // stack<TreeNode *> st;
        // st.push(root);
        // while (!st.empty())
        // {
        //     TreeNode *top = st.top();
        //     st.pop();
        //     if (root->right)
        //         st.push(root->right);
        //     if (root->left)
        //         st.push(root->left);
        //     if (!st.empty())
        //     {
        //         top->right = st.top();
        //     }
        //     top->left = nullptr;
        // }
        // ----------------------------------------------------

        // ---------------------Efficient solution O(1)space and O(n)time
        while (root)
        {
            if (root->left)
            {
                TreeNode *rightMostLeft = root->left;
                while (rightMostLeft->right)
                {
                    rightMostLeft = rightMostLeft->right;
                }
                rightMostLeft->right = root->right;
                root->right = root->left;
                root->left = nullptr;
            }
            root = root->right;
        }
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
