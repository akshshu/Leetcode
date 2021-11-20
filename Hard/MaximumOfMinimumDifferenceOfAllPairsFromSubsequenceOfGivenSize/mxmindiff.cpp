
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check(vector<int> &nums, int mid, int k)
    {
        int count = 1;
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] - last >= mid)
            {
                count++;
                last = nums[i];
                if (count == k)
                    return true;
            }
        }
        return false;
    }
    int solve(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int end = nums[n - 1] - nums[0];
        int start = 0;
        int ans = 0;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (check(nums, mid, k))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 5};
    int b = 3;
    auto ans = s.solve(nums, b);
    cout << ans;
    return 0;
}
