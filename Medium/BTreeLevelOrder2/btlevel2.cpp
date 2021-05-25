
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
    int getDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + max(getDepth(root->left), getDepth(root->right));
    }
    void recurs(TreeNode *root, int currdepth, vector<vector<int>> &ans)
    {
        if (root == nullptr)
        {
            return;
        }
        recurs(root->left, currdepth - 1, ans);
        recurs(root->right, currdepth - 1, ans);
        ans[currdepth].push_back(root->val);
    }
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        int depth = getDepth(root);
        vector<vector<int>> ans(depth, vector<int>());
        recurs(root, depth - 1, ans);
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

    auto ans = s.levelOrderBottom(root);
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
