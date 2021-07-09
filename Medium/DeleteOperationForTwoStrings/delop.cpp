
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    continue;
                }
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return m + n - (2 * dp[m][n]);
    }
};
int main()
{
    Solution s;
    string s1 = "apsx", s2 = "asda";
    auto ans = s.minDistance(s1, s2);
    cout << ans;
    return 0;
}
