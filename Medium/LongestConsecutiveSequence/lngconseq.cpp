
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, int> mapping;
        int len = 0;
        for (int x : nums)
            mapping[x]++;
        for (int x : nums)
        {
            if (mapping[x] && !mapping[x - 1])
            {
                int y = x;
                int currlen = 0;
                while (mapping[y])
                {
                    mapping[y++] = 0;
                    currlen++;
                }
                len = max(len, currlen);
            }
        }
        return len;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {100, 2, 4, 200, 1, 3, 5};
    auto ans = s.longestConsecutive(nums);
    cout << ans;
    return 0;
}
