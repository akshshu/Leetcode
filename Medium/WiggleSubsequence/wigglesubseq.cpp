
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        int count = 1;
        if (nums.size() < 2)
            return 1;
        int j = 1;
        int up = 1;
        while (j < nums.size() and nums[j] == nums[j - 1])
            j++;
        if (j == nums.size())
            return count;
        if (nums[j] - nums[j - 1] > 0)
            up = 0;
        else
            up = 1;
        for (int i = j; i < nums.size(); i++)
        {
            if (nums[i] - nums[i - 1] < 0 and up)
            {
                count++;
                up = 0;
            }
            else if (nums[i] - nums[i - 1] > 0 and !up)
            {
                count++;
                up = 1;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 7, 4, 9, 2, 5};
    auto ans = s.wiggleMaxLength(nums);
    return 0;
}
