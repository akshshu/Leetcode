
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumSubarrayMins(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> leftMin(n);
        vector<int> rightMin(n);
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() and nums[i] < nums[st.top()])
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

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long leftdist = i - leftMin[i] + 1;
            long long rightdist = rightMin[i] - i + 1;
            long long multiplier = (leftdist * rightdist);
            long long toadd = (multiplier * (nums[i])) % 1000000007;
            ans += toadd;
            ans %= 1000000007;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {11, 81, 94, 43, 3};
    auto ans = s.sumSubarrayMins(nums);
    return 0;
}
