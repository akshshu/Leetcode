
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int minSum = nums[0], maxSum = nums[0];
        int ans = 0;
        int maxNum = nums[0], minNum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            maxSum = max(maxSum + nums[i], nums[i]);
            maxNum = max(maxNum, maxSum);
            minSum = min(minSum + nums[i], nums[i]);
            minNum = min(minSum, minNum);
        }
        return max(abs(minNum), abs(maxNum));
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, -3, 2, 3, -4};
    auto ans = s.maxAbsoluteSum(nums);
    return 0;
}
