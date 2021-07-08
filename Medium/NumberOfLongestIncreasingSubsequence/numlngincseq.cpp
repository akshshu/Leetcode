
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findNumberOfLIS(vector<int> &nums)
    {
        //--------------------------O(n^2) solution
        vector<int> dp(nums.size(), 1);
        vector<int> count(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    if (dp[i] < dp[j] + 1)
                    {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    }
                    else if (dp[i] == dp[j] + 1)
                    {
                        count[i] += count[j];
                    }
                }
            }
        }
        int max = *max_element(dp.begin(), dp.end());
        int i = dp.size() - 1;
        int ans = 0;
        while (dp[i] != max)
        {
            i--;
        }
        while (i >= 0)
        {
            if (dp[i] == max)
                ans += count[i];
            i--;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 4, 7};
    auto ans = s.findNumberOfLIS(nums);
    cout << ans;
    return 0;
}
