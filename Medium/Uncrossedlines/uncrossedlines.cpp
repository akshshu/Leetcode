
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
    {

        int m = nums1.size();
        int n = nums2.size();
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= m; i++)
        {
            vector<int> temp(n + 1, 0);
            for (int j = 1; j <= n; j++)
            {
                if (nums1[i - 1] == nums2[j - 1])
                {
                    temp[j] = dp[j - 1] + 1;
                    continue;
                }
                temp[j] = max(dp[j], temp[j - 1]);
            }
            dp = temp;
        }
        return dp[n];
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
