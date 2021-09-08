
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool recurs(string &s, string &p, int i, int j, vector<vector<int>> &dp)
    {
        if (i == s.size() and j == p.size())
            return true;
        if (i == s.size())
        {
            for (int k = j; k < p.size(); k++)
                if (p[k] != '*')
                    return false;
            return true;
        }
        if (j == p.size())
            return false;
        if (dp[i][j] != -1)
            return dp[i][j] == 1;
        bool ans = false;
        if (s[i] == p[j] || p[j] == '?')
            ans = recurs(s, p, i + 1, j + 1, dp);
        else
        {
            if (p[j] != '*')
                return false;
            bool pz = recurs(s, p, i + 1, j, dp);
            bool qz = recurs(s, p, i, j + 1, dp);
            ans = (pz || qz || ans);
        }
        dp[i][j] = (ans) ? 1 : 0;
        return ans;
    }
    bool isMatch(string s, string p)
    {
        vector<vector<int>> dp(s.size(), vector<int>(p.size(), -1));
        return recurs(s, p, 0, 0, dp);
    }
};
int main()
{
    Solution s;
    string s1 = "adceb", s2 = "*a*b";
    auto ans = s.isMatch(s1, s2);
    return 0;
}
