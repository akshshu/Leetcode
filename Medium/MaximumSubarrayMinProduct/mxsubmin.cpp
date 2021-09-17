
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSumMinProduct(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> preSum(n, 0);
        preSum[0] = nums[0];
        long long maxans = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            preSum[i] = nums[i] + preSum[i - 1];
        }
        vector<int> leftMin(n);
        vector<int> rightMin(n);
        stack<int> st;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() and nums[i] <= nums[st.top()])
                st.pop();
            if (st.empty())
                leftMin[i] = 0;
            else
                leftMin[i] = st.top() + 1;
            st.push(i);
        }

        while (!st.empty())
            st.pop();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and nums[i] <= nums[st.top()])
                st.pop();
            if (st.empty())
                rightMin[i] = n - 1;
            else
                rightMin[i] = st.top() - 1;
            st.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            if (leftMin[i] == rightMin[i])
            {
                long long sums = nums[i];
                long long temp = (sums * nums[i]);
                maxans = max(temp, maxans);
                ans = maxans % 1000000007;
            }
            else
            {
                long long sums = preSum[rightMin[i]] - ((leftMin[i] - 1 < 0) ? 0 : preSum[leftMin[i] - 1]);
                long long temp = (sums * nums[i]);
                maxans = max(temp, maxans);
                ans = maxans % 1000000007;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 2};
    auto ans = s.maxSumMinProduct(nums);
    return 0;
}
