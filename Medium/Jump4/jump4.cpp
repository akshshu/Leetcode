
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxResult(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> dp(n);
        dp[n - 1] = nums[n - 1];
        deque<int> dq;
        dq.push_back(n - 1);
        for (int i = n - 2; i >= 0; i--)
        {
            while (dq.back() > i + k)
                dq.pop_back();
            dp[i] = nums[i] + dp[dq.back()];
            while (!dq.empty() and dp[dq.front()] <= dp[i])
                dq.pop_front();
            dq.push_front(i);
        }
        return dp[0];
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, -1, -2, 4, -7, 3};
    int k = 2;
    auto ans = s.maxResult(nums, k);
    return 0;
}
