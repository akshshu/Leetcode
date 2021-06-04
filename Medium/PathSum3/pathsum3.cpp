
#include <bits/stdc++.h>
using namespace std;
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
    // vector<vector<int>> ans;
    int l = 0;
    vector<TreeNode *> nodes;
    void recurs(TreeNode *root, int currentSum, int targetSum)
    {
        if (root == nullptr)
            return;

        if (currentSum + root->val == targetSum)
        {
            l++;
        }
        recurs(root->left, currentSum + root->val, targetSum);
        recurs(root->right, currentSum + root->val, targetSum);
        // ans_part.pop_back(); //Incase not reached equaltoTargetSum deleting here
    }
    void getTraversal(TreeNode *root)
    {

        if (root == nullptr)
            return;
        nodes.push_back(root);
        getTraversal(root->left);
        getTraversal(root->right);
    }
    int pathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return 0;
        if (targetSum == root->val)
            l++;
        getTraversal(root);
        for (auto x : nodes)
        {
            recurs(x->left, x->val, targetSum);
            recurs(x->right, x->val, targetSum);
        }
        return l;
    }
};
