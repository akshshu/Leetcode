
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sums = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sums += nums[i];
            sums = sums % k;
            if (mp.find(sums) != mp.end())
            {
                if (i - mp[sums] >= 2)
                    return true;
            }
            else
            {
                mp[sums % k] = i;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {23, 2, 4, 6, 7};
    int z = 6;
    auto ans = s.checkSubarraySum(nums, z);
    ;
    return 0;
}
