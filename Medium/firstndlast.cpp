//Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include "headers.h"
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans = {-1, -1};
        int size = nums.size();
        int a = 0, b = size - 1;
        int mid = (a + b) / 2;
        while (a <= b)
        {
            if (nums[mid] == target)
            {
                if (mid != 0)
                {
                    if (nums[mid - 1] == target)
                    {
                        b = mid - 1;
                    }
                    else
                    {
                        ans[0] = mid;
                        break;
                    }
                }
                else
                {
                    ans[0] = mid;
                    break;
                }
            }
            else if (nums[mid] > target)
            {
                b = mid - 1;
            }
            else
            {
                a = mid + 1;
            }
            mid = (a + b) / 2;
        }
        a = 0;
        b = size - 1;
        mid = (a + b) / 2;

        while (a <= b)
        {
            if (nums[mid] == target)
            {
                if (mid != (size - 1))
                {
                    if (nums[mid + 1] == target)
                    {
                        a = mid + 1;
                    }
                    else
                    {
                        ans[1] = mid;
                        break;
                    }
                }
                else
                {
                    ans[1] = mid;
                    break;
                }
            }
            else if (nums[mid] > target)
            {
                b = mid - 1;
            }
            else
            {
                a = mid + 1;
            }
            mid = (a + b) / 2;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {};
    int target = 6;
    vector<int> ans;
    ans = s.searchRange(nums, target);
    for (auto x : ans)
    {
        cout << x << ",";
    }
    return 0;
}