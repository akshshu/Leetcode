
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sums = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sums += nums[i];
            if (mp.find(sums - k) != mp.end())
            {
                ans += mp[sums - k];
            }
            mp[sums] += 1;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    auto ans = s.subarraySum(nums, k);
    return 0;
}
