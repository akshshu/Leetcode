
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<vector<float>>> dp;
    int a[2] = {-1, 1};
    int b[2] = {2, -2};
    double recurs(int n, int k, int row, int column)
    {
        if (k == 0)
            if (row >= 0 && row < n && column >= 0 && column < n)
                return 1;
            else
                return 0;
        if (row < 0 || row >= n || column < 0 || column >= n)
            return 0;
        if (dp[row][column][k] != -1)
        {
            return dp[row][column][k];
        }
        double prob = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int l = 0; l < 2; l++)
                {
                    if (i)
                        prob += recurs(n, k - 1, row + a[j], column + b[l]) * 0.125;
                    else
                        prob += recurs(n, k - 1, row + b[j], column + a[l]) * 0.125;
                }
            }
        }
        dp[row][column][k] = prob;
        return dp[row][column][k];
    }
    double knightProbability(int n, int k, int row, int column)
    {
        dp.resize(n, vector<vector<float>>(n, vector<float>(k + 1, -1)));
        return recurs(n, k, row, column);
    }
};
int main()
{
    Solution s;
    auto ans = s.knightProbability(3, 2, 0, 0);
    cout << ans;
    return 0;
}
