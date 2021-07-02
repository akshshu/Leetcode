
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int currIndex, int maxIndex, vector<int> &sum, vector<int> &nums, bool frst_taken)
    {
        if (currIndex == maxIndex)
            if (frst_taken)
                return 0;
            else
                return nums[currIndex];
        if (currIndex > maxIndex)
            return 0;
        if (sum[currIndex] != -1)
            return sum[currIndex];
        sum[currIndex] = max(recurs(currIndex + 1, maxIndex, sum, nums, frst_taken), nums[currIndex] + recurs(currIndex + 2, maxIndex, sum, nums, frst_taken));
        return sum[currIndex];
    }
    int rob(vector<int> &nums)
    {
        vector<int> sum(nums.size(), -1);
        int a = recurs(1, nums.size() - 1, sum, nums, false);
        fill(sum.begin(), sum.end(), -1);
        int b = nums[0] + recurs(2, nums.size() - 1, sum, nums, true);

        return max(a, b);
    }
};
int main()
{
    Solution s;
    auto ans = s.rob();
    return 0;
}
