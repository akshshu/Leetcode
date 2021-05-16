
#include <bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
//     vector<int> dp;
//     int recurs(vector<int> &nums, int k)
//     {
//         if (k == nums.size() - 1)
//             return 0;
//         if (nums[k] == 0)
//             return nums.size();
//         if (dp[k] != nums.size())
//             return dp[k];
//         for (int i = 1; i <= nums[k] && (i + k <= nums.size() - 1); i++)
//         {

//             dp[k] = min(dp[k], recurs(nums, k + i));
//         }
//         dp[k] = 1 + dp[k];
//         return dp[k];
//     }
//     int jump(vector<int> &nums)
//     {
//         dp.resize(nums.size());
//         fill(dp.begin(), dp.end(), nums.size());
//         dp[nums.size() - 1] = 0;
//         return recurs(nums, 0);
//     }
// };
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        vector<int> dp(nums.size(), nums.size()); //new dp values will always be less than nums.size()
        dp[nums.size() - 1] = 0;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] == 0)
            {
                dp[i] = nums.size();
                continue;
            }
            for (int j = 1; (i + j <= nums.size() - 1) && j <= nums[i]; j++)
                dp[i] = min(dp[i], dp[i + j]);

            dp[i] = dp[i] + 1;
        }
        return dp[0];
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 3, 1, 1, 4};
    auto ans = s.jump(nums);
    cout << ans;
    return 0;
}
