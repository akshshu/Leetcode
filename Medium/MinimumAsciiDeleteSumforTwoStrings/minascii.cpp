
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumDeleteSum(string s1, string s2)
    {
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
        for (int i = 1; i <= s1.size(); i++)
        {
            for (int j = 1; j <= s2.size(); j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] += (int)s1[i - 1] + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        int maxt = dp[s1.size()][s2.size()];
        int totalCost = 0;
        for (char x : s1)
            totalCost += (int)x;
        for (char x : s2)
            totalCost += (int)x;
        return totalCost - (2 * maxt);
    }
};
int main()
{
    Solution s;
    string s1 = "delete", s2 = "leet";
    auto ans = s.minimumDeleteSum(s1, s2);
    cout << ans;
    return 0;
}
