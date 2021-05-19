
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        nums.push_back(0);
        int m = nums.size();

        for (auto &x : nums)
        {
            if (x <= 0)
            {
                x = nums.size() + 4;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (abs(nums[i]) < m)
            {
                nums[abs(nums[i])] = -1 * abs(nums[abs(nums[i])]);
            }
        }
        for (int i = 1; i < m; i++)
        {
            if (nums[i] > 0)
                return i;
        }
        return nums.size();
    }
};
int main()
{
    Solution s;
    vector<int> nums={1,-1,2,0,4};
    auto ans = s.firstMissingPositive(nums);
    return 0;
}
