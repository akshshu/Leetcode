
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int strt = 0;
        int end = nums.size() - 1;
        while (strt <= end)
        {
            int mid = strt + (end - strt) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] >= nums[strt])
            {
                if (target >= nums[strt] && target <= nums[mid])
                    end = mid - 1;
                else
                    strt = mid + 1;
            }
            else
            {
                if (target >= nums[mid] && target <= nums[end])
                    strt = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {17, 18, 19, 0, 1};
    int target = 18;
    auto ans = s.search(nums, target);
    cout << ans;
    return 0;
}
