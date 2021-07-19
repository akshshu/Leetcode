
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int index, vector<int> &nums, vector<vector<int>> &dp, int currSum, int target)
    {
        if (index == nums.size())
        {
            if (currSum == target)
                return 1;
            else
                return 0;
        }
        if (currSum < target)
            return 0;
        if (dp[index][currSum] != -1)
            return dp[index][currSum];
        dp[index][currSum] = recurs(index + 1, nums, dp, currSum - 2 * nums[index], target) + recurs(index + 1, nums, dp, currSum, target);
        return dp[index][currSum];
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if (total < target)
            return 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> dp(nums.size(), vector<int>(total + 1, -1));
        return recurs(0, nums, dp, total, target);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    auto ans = s.findTargetSumWays(nums, target);
    return 0;
}
