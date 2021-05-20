
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<vector<int>>> dp;
    int recurs(int m, int n, int maxMove, int startRow, int startColumn)
    {
        if (maxMove < 0)
            return 0;
        if (startRow < 0 || startRow == m || startColumn < 0 || startColumn == n)
            return 1;
        if (dp[startRow][startColumn][maxMove] != -1)
            return dp[startRow][startColumn][maxMove];
        unsigned int ans = 0;
        ans += recurs(m, n, maxMove - 1, startRow - 1, startColumn);
        ans += recurs(m, n, maxMove - 1, startRow, startColumn - 1);
        ans += recurs(m, n, maxMove - 1, startRow, startColumn + 1);
        ans += recurs(m, n, maxMove - 1, startRow + 1, startColumn);
        dp[startRow][startColumn][maxMove] = ans % 1000000007;
        return dp[startRow][startColumn][maxMove];
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        dp.resize(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return recurs(m, n, maxMove, startRow, startColumn);
    }
};
int main()
{
    Solution s;
    auto ans = s.findPaths(1, 3, 3, 0, 1);
    cout << ans;
    return 0;
}
