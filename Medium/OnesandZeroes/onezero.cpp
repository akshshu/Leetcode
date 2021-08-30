
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // unordered_map<string,int>dp;
    int helper(int index, int m, int n, vector<int> &nums1, vector<int> &nums0, vector<vector<vector<int>>> &dp)
    {
        if (index == nums1.size())
            return 0;
        // string currState=to_string(m)+'#'+to_string(n)+'#'+to_string(index);
        if (dp[index][m][n] != -1)
            return dp[index][m][n];
        int a = 0, b = 0;
        if (nums0[index] <= m and nums1[index] <= n)
            a = 1 + helper(index + 1, m - nums0[index], n - nums1[index], nums1, nums0, dp);
        b = helper(index + 1, m, n, nums1, nums0, dp);
        dp[index][m][n] = max(a, b);
        return dp[index][m][n];
    }
    int findMaxForm(vector<string> &strs, int m, int n)
    {
        vector<int> nums1(strs.size(), 0);
        vector<int> nums0(strs.size(), 0);
        vector<vector<vector<int>>> dp(strs.size(), vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));
        for (int i = 0; i < strs.size(); i++)
        {
            int zeroCount = 0;
            int oneCount = 0;
            for (int j = 0; j < strs[i].size(); j++)
            {
                if (strs[i][j] == '0')
                    zeroCount++;
                else
                    oneCount++;
            }
            nums1[i] = oneCount;
            nums0[i] = zeroCount;
        }
        return helper(0, m, n, nums1, nums0, dp);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
