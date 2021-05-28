
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> ans(2, 0);
        int d = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            d ^= nums[i];
        }
        int copy = d;
        int pos = 0;
        while (!(d & 1))
        {
            pos++;
            d = d >> 1;
        }
        int k = 1;
        while (pos--)
        {
            k = k << 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if ((k & nums[i]) == 0)
                ans[0] ^= nums[i];
            else
            {
                ans[1] ^= nums[i];
            }
        }
        for (auto x : ans)
        {
            cout << x << endl;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1, 3, 4, 3, 4, 5};
    auto ans = s.singleNumber(nums);
    return 0;
}
