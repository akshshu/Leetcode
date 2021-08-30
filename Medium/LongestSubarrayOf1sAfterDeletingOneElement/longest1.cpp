
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 0;
        vector<int> left(nums.size(), 1);
        vector<int> right(nums.size(), 1);
        left[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                left[i] = 0;
            else
            {
                left[i] += left[i - 1];
            }
        }
        right[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] == 0)
                right[i] = 0;
            else
            {
                right[i] += right[i + 1];
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                int temp = right[i + 1];
                ans = max(temp, ans);
            }
            else if (i == nums.size() - 1)
            {
                int temp = left[i - 1];
                ans = max(temp, ans);
            }
            else
            {
                int temp = left[i - 1] + right[i + 1];
                ans = max(temp, ans);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 0, 1};
    auto ans = s.longestSubarray(nums);
    return 0;
}
