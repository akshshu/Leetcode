
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = max(nums[i], nums[i] + nums[i - 1]);
        }
        return *max_element(nums.begin(), nums.end());
    }
};
int main()
{
    Solution s;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    auto ans = s.maxSubArray(nums);
    return 0;
}
