
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int lastelempos = nums.size() - 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] + i >= lastelempos)
                lastelempos = i;
        }
        return lastelempos == 0;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, 1, 0, 4};
    auto ans = s.canJump(nums);
    cout << ans;
    return 0;
}
