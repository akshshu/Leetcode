
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int rows = matrix.size() + 1;
        int cols = matrix[0].size() + 1;
        int maxS = 0;
        vector<int> dp(cols, 0);
        for (int i = 1; i < rows; i++)
        {
            vector<int> temp(cols, 0);
            for (int j = 1; j < cols; j++)
            {
                if (matrix[i - 1][j - 1] == '1')
                {
                    temp[j] = min(temp[j - 1], min(dp[j], dp[j - 1])) + 1;
                    if (temp[j] > maxS)
                        maxS = temp[j];
                }
            }
            dp = temp;
        }
        return maxS * maxS;
    }
};
int main()
{
    Solution s;
    vector<vector<char>> matrix = {{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
    auto ans = s.maximalSquare(matrix);
    return 0;
}
