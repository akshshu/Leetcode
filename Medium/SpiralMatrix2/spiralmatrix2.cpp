
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int currupperrow = 0;
        int currrightcol = n - 1;
        int currdownrow = n - 1;
        int currleftcol = 0;
        int col = 0, row = 0;
        int number = 1;
        while (currupperrow <= currdownrow && currleftcol <= currrightcol)
        {
            if (col > currrightcol)
                break;
            while (col <= currrightcol)
            {
                ans[row][col++] = number++;
            }
            currupperrow++;
            col--;
            row++;
            if (row > currdownrow)
                break;
            while (row <= currdownrow)
            {
                ans[row++][col] = number++;
            }
            col--;
            row--;
            currrightcol--;
            if (col < currleftcol)
                break;
            while (col >= currleftcol)
            {
                ans[row][col--] = number++;
            }
            currdownrow--;
            row--;
            col++;
            if (row < currupperrow)
                break;
            while (row >= currupperrow)
            {
                ans[row--][col] = number++;
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
    auto ans = s.generateMatrix(5);
    for (auto x : ans)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
    return 0;
}
