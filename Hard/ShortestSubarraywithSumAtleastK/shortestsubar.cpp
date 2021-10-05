
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = INT_MAX;
        deque<int> dq;
        vector<int> sums(n, 0);
        sums[0] = nums[0];
        for (int i = 1; i < n; i++)
            sums[i] = sums[i - 1] + nums[i];
        for (int j = 0; j < n; j++)
        {
            if (sums[j] >= k)
                ans = min(ans, j + 1);
            while (!dq.empty() and sums[j] <= sums[dq.back()])
                dq.pop_back();
            while (!dq.empty() and sums[j] - sums[dq.front()] >= k)
            {
                ans = min(ans, j - dq.front());
                dq.pop_front();
            }

            dq.push_back(j);
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
