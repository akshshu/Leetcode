
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
    unordered_map<int, int> mp;
    int maxquantity = INT_MIN;
    int recurs(TreeNode *root)
    {
        if (!root)
            return 0;
        int val = root->val + recurs(root->left) + recurs(root->right);
        mp[val]++;
        if (mp[val] > maxquantity)
            maxquantity = mp[val];
        return val;
    }
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        int val = recurs(root);
        vector<int> ans;
        for (auto x : mp)
        {
            if (mp[x.first] == maxquantity)
                ans.push_back(x.first);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
