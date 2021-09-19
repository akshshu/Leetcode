
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
    int getNum(string s, int &index)
    {
        string temp = "";
        while (index < s.size() and s[index] >= '0' and s[index] <= '9')
        {
            temp += s[index];
            index++;
        }
        return stoi(temp);
    }
    int getDashCount(string s, int &index)
    {
        int dashCount = 0;
        while (index < s.size() and s[index] == '-')
        {
            dashCount++;
            index++;
        }
        return dashCount;
    }
    int rightNodeDashCount = 0;
    TreeNode *recurs(string s, int level, int n, int &index)
    {
        if (index == n)
            return nullptr;
        int Num = getNum(s, index);
        TreeNode *newN = new TreeNode(Num);
        int NumDashes = getDashCount(s, index);
        if (NumDashes == level + 1)
            newN->left = recurs(s, level + 1, n, index);
        else
            rightNodeDashCount = NumDashes;
        if (rightNodeDashCount == level + 1)
            newN->right = recurs(s, level + 1, n, index);
        return newN;
    }
    TreeNode *recoverFromPreorder(string s)
    {
        int n = s.size();
        int index = 0;
        return recurs(s, 0, n, index);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
