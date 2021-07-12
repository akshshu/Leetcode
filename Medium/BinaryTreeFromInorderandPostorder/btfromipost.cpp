
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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int numNodes = postorder.size();
        vector<TreeNode *> indexToadd(numNodes, nullptr);
        unordered_map<int, int> indexVisited;
        unordered_map<int, int> nodeIndex;
        for (int index = 0; index < numNodes; index++)
            nodeIndex[inorder[index]] = index;
        int val = postorder[numNodes - 1];
        TreeNode *newNode = new TreeNode(val);
        indexToadd[nodeIndex[val]] = newNode;
        indexVisited[nodeIndex[val]] = 1;
        int prevIndex = nodeIndex[val];
        for (int index = numNodes - 2; index >= 0; index--)
        {
            int val = postorder[index];
            TreeNode *newNode = new TreeNode(val);
            int currIndex = nodeIndex[val];
            if (currIndex < prevIndex)
            {
                while (indexVisited[prevIndex])
                    prevIndex--;
                prevIndex++;
                indexToadd[prevIndex]->left = newNode;
            }
            else
            {
                while (indexVisited[prevIndex])
                    prevIndex++;
                prevIndex--;
                indexToadd[prevIndex]->right = newNode;
            }
            indexToadd[nodeIndex[val]] = newNode;
            indexVisited[nodeIndex[val]] = 1;
            prevIndex = currIndex;
        }
        return newNode;
    }
};

int main()
{
    Solution s;
    vector<int> inorder = {9, 3, 15, 20, 7}, postorder = {9, 15, 7, 20, 3};
    auto ans = s.buildTree(inorder, postorder);
    return 0;
}
