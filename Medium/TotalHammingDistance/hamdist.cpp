
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalHammingDistance(vector<int> &nums)
    {
        int j = 1;
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int zeroCount = 0;
            int oneCount = 0;
            for (int x : nums)
            {
                if (x & j)
                    oneCount++;
                else
                    zeroCount++;
            }
            ans += (zeroCount * oneCount);
            if (i < 31)
                j = j << 1;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 14, 2};
    auto ans = s.totalHammingDistance(nums);
    return 0;
}
