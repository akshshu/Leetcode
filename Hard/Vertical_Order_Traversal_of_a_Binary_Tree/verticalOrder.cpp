
#include <bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
//     int minColumn = INT_MAX, maxColumn = 0;
//     int maxRow = 0;
//     void recurs(TreeNode *root, int row, int col)
//     {
//         if (!root)
//             return;
//         recurs(root->left, row + 1, col - 1);
//         recurs(root->right, row + 1, col + 1);
//         if (col > maxColumn)
//             maxColumn = col;
//         if (col < minColumn)
//             minColumn = col;
//         if (row > maxRow)
//             maxRow = row;
//     }
//     void recurs2(TreeNode *root, int row, int col, vector<vector<vector<int>>> &storage, int indexPadding)
//     {
//         if (!root)
//             return;
//         storage[row][col + indexPadding].push_back(root->val);
//         recurs2(root->left, row + 1, col - 1, storage, indexPadding);
//         recurs2(root->right, row + 1, col + 1, storage, indexPadding);
//     }
//     vector<vector<int>> verticalTraversal(TreeNode *root)
//     {
//         recurs(root, 0, 0);
//         int size = maxColumn - minColumn + 1;
//         vector<vector<vector<int>>> storage(maxRow + 1, vector<vector<int>>(size));
//         recurs2(root, 0, 0a, storage, abs(minColumn));
//         vector<vector<int>> ans(size);
//         for (int j = 0; j < size; j++)
//         {
//             for (int i = 0; i < maxRow + 1; i++)
//             {
//                 sort(storage[i][j].begin(), storage[i][j].end());
//                 for (int el : storage[i][j])
//                 {
//                     ans[j].push_back(el);
//                 }
//             }
//         }

//         return ans;
//     }
// };
struct sortFun
{
    bool operator()(const vector<int> &a, const vector<int> &b)
    {
        return (a[0] == b[0]) ? a[1] < b[1] : a[0] < b[0];
    }
};
class Solution
{
public:
    map<int, vector<vector<int>>> storage;
    void recurs2(TreeNode *root, int row, int col)
    {
        if (!root)
            return;
        storage[col].push_back({row, root->val});
        recurs2(root->left, row + 1, col - 1);
        recurs2(root->right, row + 1, col + 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        recurs2(root, 0, 0);
        vector<vector<int>> ans;
        for (auto &el : storage)
            sort(el.second.begin(), el.second.end(), sortFun());
        for (auto el : storage)
        {
            vector<int> temp;
            for (int i = 0; i < el.second.size(); i++)
                temp.push_back(el.second[i][1]);
            ans.push_back(temp);
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
