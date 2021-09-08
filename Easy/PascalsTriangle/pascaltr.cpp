
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans(numRows);
        for (int i = 0; i < numRows; i++)
        {
            ans[i].resize(i + 1, 0);
        }
        if (numRows == 1)
            return {{1}};
        ans[0][0] = 1;
        ans[1][0] = 1;
        ans[1][1] = 1;
        for (int i = 2; i < numRows; i++)
        {
            ans[i][0] = 1;
            ans[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
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
