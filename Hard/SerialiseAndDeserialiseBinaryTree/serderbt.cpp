
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec
{
public:
    void preorder(TreeNode *root, string &s)
    {
        if (!root)
        {
            s += "null,";
            return;
        }
        s += to_string(root->val) + ',';
        preorder(root->left, s);
        preorder(root->right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        string s = "";
        preorder(root, s);
        return s;
    }
    TreeNode *recurs(vector<string> &arr, int &index)
    {
        if (arr[index] == "null")
            return nullptr;
        TreeNode *root = new TreeNode(stoi(arr[index]));
        index++;
        root->left = recurs(arr, index);
        index++;
        root->right = recurs(arr, index);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        int n = data.size();
        vector<string> arr;
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            if (data[i] == ',')
            {
                arr.push_back(temp);
                temp = "";
            }
            else
                temp += data[i];
        }
        int m = arr.size();
        int start = 0;
        return recurs(arr, start);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
