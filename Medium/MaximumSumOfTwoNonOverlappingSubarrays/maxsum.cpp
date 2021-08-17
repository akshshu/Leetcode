
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSumTwoNoOverlap(vector<int> &nums, int firstlen, int secondlen)
    {
        vector<int> prefixSum(nums.size() + 1);
        int sum = 0;
        prefixSum[0] = nums[0];
        for (int i = 1; i <= nums.size(); i++)
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        vector<int> leftSum(nums.size() + 1, 0);
        for (int i = secondlen; i <= nums.size(); i++)
            leftSum[i] = max(leftSum[i - 1], prefixSum[i] - prefixSum[i - secondlen]);
        vector<int> rightSum(nums.size() + 1, 0);
        for (int i = nums.size() - secondlen; i >= 1; i--)
            rightSum[i] = max(rightSum[i + 1], prefixSum[i + secondlen] - prefixSum[i]);
        int ans = INT_MIN;
        int index = firstlen;
        int left = 0;
        int right = index;
        for (int i = index; i <= nums.size(); i++)
        {
            left = i - firstlen - 1;
            right = i;
            int temp = prefixSum[i] - prefixSum[i - firstlen];
            if (left - secondlen >= 0)
            {
                int temp2 = leftSum[left];
                ans = (ans < temp + temp2) ? temp + temp2 : ans;
            }
            if (right + secondlen <= nums.size())
            {
                int temp2 = rightSum[right];
                ans = (ans < temp + temp2) ? temp + temp2 : ans;
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 0, 4, 5, 1};
    int first = 3;
    int second = 2;
    auto ans = s.maxSumTwoNoOverlap(nums, first, second);
    return 0;
}
