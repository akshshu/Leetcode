
#include <bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        queue<TreeNode *> qp;
        if (root == nullptr)
            return ans;
        qp.push(root);
        int s = qp.size();
        while (!qp.empty())
        {
            vector<int> temp;
            while (s--)
            {
                temp.push_back(qp.front()->val);
                if (qp.front()->left != nullptr)
                {
                    qp.push(qp.front()->left);
                }
                if (qp.front()->right != nullptr)
                {
                    qp.push(qp.front()->right);
                }
                qp.pop();
            }
            ans.push_back(temp);
            s = qp.size();
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto left = new TreeNode(15);
    auto right = new TreeNode(7);
    auto root = new TreeNode(20, left, right);
    left = new TreeNode(9);
    auto Newroot = new TreeNode(3, left, root);
    root = Newroot;

    auto ans = s.levelOrder(root);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
