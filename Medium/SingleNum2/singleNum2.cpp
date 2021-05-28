
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        vector<int> numfreq(32, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i]) & 1)
                numfreq[0] += 1;
            int temp = (nums[i] >> 1);
            for (int i = 1; i < 32; i++)
            {
                if (temp & 1)
                    numfreq[i] += 1;
                temp = temp >> 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (numfreq[i] % 3 != 0)
            {
                ans += (1 << i);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 3, 4, 3, 3, 7, 5, 6, 5, 4, 2, 2, 6, 6, 4, 5};
    auto ans = s.singleNumber(nums);
    cout << ans;
    return 0;
}
