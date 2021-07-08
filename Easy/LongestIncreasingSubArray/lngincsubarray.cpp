
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int len = 1;
        int prev = nums[0];
        int tempLen = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (prev < nums[i])
                tempLen++;
            else
                tempLen = 1;
            len = max(tempLen, len);
            prev = nums[i];
        }
        return len;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 4, 7};
    auto ans = s.findLengthOfLCIS(nums);
    cout << ans;
    return 0;
}
