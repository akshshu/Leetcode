
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1;
        if (nums.size() == 1)
            return nums[0];
        if (nums[low] != nums[low + 1])
            return nums[low];
        if (nums[high] != nums[high - 1])
            return nums[high];
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];
            if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid + 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            else
            {
                if (nums[mid] == nums[mid - 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 2, 5, 5, 6, 6, 7, 7, 8, 8, 9, 10, 10};
    auto ans = s.singleNonDuplicate(nums);
    cout << ans;
    return 0;
}
