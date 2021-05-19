
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int currupperrow = 0;
        int currrightcol = matrix[0].size() - 1;
        int currdownrow = matrix.size() - 1;
        int currleftcol = 0;
        int col = 0, row = 0;
        while (currupperrow <= currdownrow && currleftcol <= currrightcol)
        {
            if (col > currrightcol)
                break;
            while (col <= currrightcol)
            {
                ans.push_back(matrix[row][col++]);
            }
            currupperrow++;
            col--;
            row++;
            if (row > currdownrow)
                break;
            while (row <= currdownrow)
            {
                ans.push_back(matrix[row++][col]);
            }
            col--;
            row--;
            currrightcol--;
            if (col < currleftcol)
                break;
            while (col >= currleftcol)
            {
                ans.push_back(matrix[row][col--]);
            }
            currdownrow--;
            row--;
            col++;
            if (row < currupperrow)
                break;
            while (row >= currupperrow)
            {
                ans.push_back(matrix[row--][col]);
            }
            row++;
            col++;
            currleftcol++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    auto ans = s.spiralOrder(matrix);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
