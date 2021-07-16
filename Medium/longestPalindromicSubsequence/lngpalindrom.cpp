
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        string s_copy = s;
        reverse(s_copy.begin(), s_copy.end());
        vector<int> dp(s.size() + 1, 0);
        for (int i = 1; i <= s.size(); i++)
        {
            vector<int> temp(s.size() + 1, 0);
            for (int j = 1; j <= s.size(); j++)
            {
                if (s[i - 1] == s_copy[j - 1])
                {
                    temp[j] = 1 + dp[j - 1];
                }
                else
                {
                    temp[j] = max(temp[j - 1], dp[j]);
                }
            }
            dp = temp;
        }
        return dp[s.size()];
    }
};
int main()
{
    Solution s;
    string sp = "asdkjashfaasadfdcscad";
    auto ans = s.longestPalindromeSubseq(sp);
    return 0;
}
