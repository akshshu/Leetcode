
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /**
     * @param nums: an array
     * @param k: a target value
     * @return: the maximum length of a subarray that sums to k
     */

    int maxSubArrayLen(vector<int> &nums, int k)
    {
        // Write your code here
        unordered_map<int, int> ump;
        ump[0] = -1;
        int ans = 0;
        int prefixSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i];
            if (ump.find(prefixSum - k) != ump.end())
                ans = max(ans, i - ump[prefixSum - k]);

            if (ump.find(prefixSum) == ump.end())
                ump[prefixSum] = i;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;
    auto ans = s.maxSubArrayLen(nums, k);
    return 0;
}
