
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 1);
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0)
                {
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        }
        int max = *max_element(dp.begin(), dp.end());
        int i = dp.size() - 1;
        while (dp[i] != max)
            i--;

        int numcheck = nums[i];
        vector<int> ans;
        while (i >= 0)
        {
            if (numcheck % nums[i] == 0 && dp[i] == max)
            {
                ans.push_back(nums[i]);
                numcheck = nums[i];
                max--;
            }
            i--;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 4, 8};
    auto ans = s.largestDivisibleSubset(nums);
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
