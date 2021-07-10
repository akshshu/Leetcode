
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *recurs(vector<int> &preorder, int &index, int min_range, int max_range, int size)
    {
        if (index >= size)
            return nullptr;
        TreeNode *node = nullptr;
        if (preorder[index] > min_range && preorder[index] < max_range)
        {
            node = new TreeNode(preorder[index]);
            node->left = node->right = nullptr;
            index++;
            node->left = recurs(preorder, index, min_range, preorder[index - 1], size);
            node->right = recurs(preorder, index, preorder[index - 1], max_range, size);
        }
        return node;
    }
    void print(TreeNode *root)
    {
        queue<TreeNode *> st;
        st.push(root);
        int localCount = 1;
        while (!st.empty())
        {
            int count = localCount;
            localCount = 0;
            while (count)
            {
                auto top = st.front();
                if (top == nullptr)
                {
                    st.pop();
                    cout << "null, ";
                    count = count - 1;
                    continue;
                }

                count--;
                st.pop();

                cout << top->val << ", ";

                if (!top->left && !top->right)
                {
                }
                else
                {
                    if (top->left)
                    {
                        st.push(top->left);
                        localCount++;
                    }
                    else
                    {
                        st.push(nullptr);
                        localCount++;
                    }

                    if (top->right)
                    {
                        st.push(top->right);
                        localCount++;
                    }
                    else
                    {
                        st.push(nullptr);
                        localCount++;
                    }
                }
            }
        }
    }
    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        int index = 0;
        TreeNode *root = recurs(preorder, index, INT_MIN, INT_MAX, preorder.size());
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3};
    auto ans = s.bstFromPreorder(nums);
    s.print(ans);

    return 0;
}
