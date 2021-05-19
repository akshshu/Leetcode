
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // int findDuplicate(vector<int> &nums)
    // {
    //     int i, temp;
    //     for (i = 0; i < nums.size(); i++)
    //     {
    //         temp = abs(nums[i]);
    //         if (nums[temp] < 0)
    //             break;
    //         nums[temp] = -1 * nums[temp];
    //     }
    //     return temp;
    // }
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0], fast = nums[0];
        slow = nums[slow];
        fast = nums[nums[fast]];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << s.findDuplicate(nums);
    return 0;
}
