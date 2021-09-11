
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        vector<unordered_map<long long, long long>> dp(nums.size());
        int res = 0;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long diff = (long long)nums[j] - (long long)nums[i];

                dp[i][diff]++;

                if (dp[j].find(diff) != dp[j].end())
                {
                    dp[i][diff] += dp[j][diff];
                    res += dp[j][diff];
                }
            }
        }

        return res;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 4, 6, 8, 10};
    auto ans = s.numberOfArithmeticSlices(nums);
    return 0;
}
