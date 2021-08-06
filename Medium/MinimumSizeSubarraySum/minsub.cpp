
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i = 0, j = 0;
        int currentSum = 0;
        int ans = INT_MAX;
        int length = 0;
        while (i < nums.size())
        {
            currentSum += nums[i];
            length++;
            if (currentSum >= target)
            {
                while (j <= i and currentSum >= target)
                {
                    currentSum -= nums[j];
                    j++;
                    length--;
                }
                ans = (length + 1 < ans) ? length + 1 : ans;
            }
            i++;
        }
        if (ans == INT_MAX)
            return 0;
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    auto ans = s.minSubArrayLen(7, nums);
    return 0;
}
