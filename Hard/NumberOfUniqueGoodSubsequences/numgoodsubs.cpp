
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfUniqueGoodSubsequences(string binary)
    {
        int n = binary.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));
        int zerocount = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (binary[i] == '0')
            {
                zerocount = 1;
                dp[i][0] = (1 + dp[i + 1][1] + dp[i + 1][0]) % 1000000007;
                dp[i][1] = dp[i + 1][1];
            }
            else
            {
                dp[i][1] = (1 + dp[i + 1][1] + dp[i + 1][0]) % 1000000007;
                dp[i][0] = dp[i + 1][0];
            }
        }
        return (dp[0][1] + zerocount) % 1000000007;
    }
};
class Solution
{
    int MOD = 1000000007;

public:
    int numberOfUniqueGoodSubsequences(string binary)
    {
        int zero = 0;
        long long ones = 0;
        long long zeros = 0;

        for (int i = binary.size() - 1; i >= 0; --i)
        {
            if (binary[i] == '1')
            {
                ones = (ones + zeros + 1) % MOD;
            }
            else
            {
                zero = 1;
                zeros = (ones + zeros + 1) % MOD;
            }
        }
        return (ones + zero) % MOD;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
