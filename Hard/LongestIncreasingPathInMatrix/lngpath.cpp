
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans = INT_MIN;
    int recurs(int i, int j, vector<vector<int>> &dp, int prev, vector<vector<int>> &matrix)
    {
        if (i < 0 || j < 0 || i == dp.size() || j == dp[0].size())
            return 0;
        if (prev >= matrix[i][j])
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        dp[i][j] = 1;
        int a = recurs(i - 1, j, dp, matrix[i][j], matrix);
        int b = recurs(i, j - 1, dp, matrix[i][j], matrix);
        int c = recurs(i + 1, j, dp, matrix[i][j], matrix);
        int d = recurs(i, j + 1, dp, matrix[i][j], matrix);
        dp[i][j] = dp[i][j] + max(a, max(b, max(c, d)));
        ans = max(ans, dp[i][j]);
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> dp(row, vector<int>(col, -1));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int x = recurs(i, j, dp, -1, matrix);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
    auto ans = s.longestIncreasingPath(matrix);
    return 0;
}
