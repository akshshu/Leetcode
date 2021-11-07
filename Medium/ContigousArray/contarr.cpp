
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int ans = 0, count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            count = count + (nums[i] == 1 ? 1 : -1);
            if (mp.find(count) != mp.end())
                ans = max(ans, i - mp[count]);
            else
                mp[count] = i;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {0, 1, 0};
    auto ans = s.findMaxLength(nums);
    return 0;
}
