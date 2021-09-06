
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool helper(vector<vector<int>> &dp, int i, int j, string &s, string &p)
    {
        if (dp[i][j] != -1)
            return dp[i][j] == 1;
        bool ans;
        if (j == p.size())
        {
            ans = i == s.size();
        }
        else
        {
            bool currMatch = (i < s.size() and (p[j] == s[i] or p[j] == '.'));
            if (j + 1 < p.size() and p[j + 1] == '*')
            {
                ans = (helper(dp, i, j + 2, s, p) || currMatch && helper(dp, i + 1, j, s, p));
            }
            else
            {
                ans = currMatch && helper(dp, i + 1, j + 1, s, p);
            }
        }
        dp[i][j] = (ans) ? 1 : 0;
        return ans;
    }
    bool isMatch(string s, string p)
    {
        vector<vector<int>> dp(s.size() + 1, vector<int>(p.size() + 1, -1));
        return helper(dp, 0, 0, s, p);
    }
};
int main()
{
    Solution s;
    string s = "aa", p = "a*";
    auto ans = s.isMatch(s, p);
    return 0;
}
