
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zeropos = 0, iter = 0, twopos = nums.size() - 1;
        while (iter <= twopos)
        {
            if (nums[iter] == 0)
                swap(nums[zeropos++], nums[iter++]);
            else if (nums[iter] == 1)
                iter++;
            else
                swap(nums[iter], nums[twopos--]);
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    s.sortColors(nums);
    for (auto x : nums)
    {
        cout << x << " ";
    }
    return 0;
}
