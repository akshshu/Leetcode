
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int m = word1.size();
        int n = word2.size();
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= m; i++)
        {
            vector<int> temp(n + 1, 0);
            for (int j = 1; j <= n; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    temp[j] = dp[j - 1] + 1;
                    continue;
                }
                temp[j] = max(dp[j], temp[j - 1]);
            }
            dp = temp;
        }
        return m + n - (2 * dp[n]);
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
