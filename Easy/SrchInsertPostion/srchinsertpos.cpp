
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                if (mid == 0)
                    return 0;
                else
                {
                    if (nums[mid - 1] == target)
                        end = mid - 1;
                    else
                        return mid;
                }
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        if (nums[mid] < target)
            return mid + 1;
        return mid;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    auto ans = s.searchInsert(nums, target);
    cout << ans;
    return 0;
}
