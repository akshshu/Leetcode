
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        if (n == 2)
        {
            swap(nums[0], nums[1]);
            return nums;
        }
        ans[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            ans[i] = nums[i] * ans[i - 1];

        for (int i = nums.size() - 2; i >= 0; i--)
            nums[i] = nums[i] * nums[i + 1];

        int prev = ans[0];
        ans[0] = nums[1];
        ans[n - 1] = ans[n - 2];
        for (int i = 1; i < nums.size() - 1; i++)
        {
            int temp = ans[i];
            ans[i] = prev * nums[i + 1];
            prev = temp;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
