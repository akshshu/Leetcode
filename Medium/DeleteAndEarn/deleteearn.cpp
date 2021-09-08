
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        int sums[10005] = {0};
        for (int x : nums)
        {
            sums[x] += x;
        }
        int dp[10005];
        dp[1] = sums[1];
        dp[2] = max(sums[1], sums[2]);
        for (int i = 3; i < 10005; i++)
        {
            dp[i] = max(sums[i] + dp[i - 2], dp[i - 1]);
        }
        return dp[10004];
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 2, 3, 3, 3, 4};
    auto ans = s.deleteAndEarn(nums);
    return 0;
}
