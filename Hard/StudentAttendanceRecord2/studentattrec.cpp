
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int i, int tA, int cL, vector<vector<vector<long long>>> &dp, int n)
    {
        if (tA == 2 || cL == 3)
            return 0;
        if (i == n)
            return 1;
        if (dp[i][cL][tA] != -1)
            return dp[i][cL][tA];
        dp[i][cL][tA] = ((recurs(i + 1, tA + 1, 0, dp, n) + recurs(i + 1, tA, cL + 1, dp, n)) % 1000000007 + recurs(i + 1, tA, 0, dp, n)) % 1000000007;
        return dp[i][cL][tA];
    }
    int checkRecord(int n)
    {
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(3, vector<long long>(2, -1)));
        return recurs(0, 0, 0, dp, n);
    }
};
int main()
{
    Solution s;
    auto ans = s.checkRecord(4);
    return 0;
}
