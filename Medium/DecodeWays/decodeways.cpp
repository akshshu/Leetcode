
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // int recurs(int index, string s, vector<int> &dp)
    // {
    //     if (index == s.size())
    //     {
    //         return 1;
    //     }
    //     if (dp[index] != -1)
    //         return dp[index];
    //     if (s[index] == '0')
    //         return 0;
    //     dp[index] = recurs(index + 1, s, dp);
    //     if (index + 1 < s.size())
    //     {
    //         if (s[index] == '1')
    //             dp[index] += recurs(index + 2, s, dp);

    //         else if (s[index] == '2')
    //             if (s[index + 1] != '7' and s[index + 1] != '8' and s[index + 1] != '9')
    //                 dp[index] += recurs(index + 2, s, dp);
    //     }
    //     return dp[index];
    // }
    // -----------------------dp version ------O(n)time and O(1)space
    int numDecodings(string s)
    {
        if (s[0] == '0')
            return 0;
        int siz = s.size();
        vector<int> dp(siz + 1, 0);
        dp[siz] = 1;
        dp[siz - 1] = (s[siz - 1] == '0') ? 0 : 1;
        for (int i = siz - 2; i >= 0; i--)
        {
            if (s[i] == '0')
                dp[i] = 0;
            else if (s[i] >= '3' || (s[i] == '2' && s[i + 1] >= '7'))
                dp[i] = dp[i + 1];
            else
                dp[i] = dp[i + 1] + dp[i + 2];
        }

        return dp[0];
    }
    // ------------------------------recursive------------O(n) time and space
    // int numDecodings(string s)
    // {
    //     vector<int> dp(s.size(), -1);
    //     dp[0] = recurs(0, s, dp);
    //     return dp[0];
    //     ;
    // }
};
int main()
{
    Solution s;
    string s1 = "123332";
    auto ans = s.numDecodings(s1);
    cout << ans;
    return 0;
}
