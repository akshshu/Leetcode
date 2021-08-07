
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        if (k <= 1)
            return 0;
        int prod = 1;
        int left = 0, right = 0;
        int ans = 0;
        while (right < nums.size())
        {
            prod *= nums[right];
            while (prod >= k)
            {
                prod /= nums[left];
                left++;
            }
            ans += (right - left + 1);
            right++;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    auto ans = s.numSubarrayProductLessThanK(nums, k);
    return 0;
}
