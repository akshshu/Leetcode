
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int zeroloc = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (abs(nums[i]) == n)
                continue;
            else
            {
                nums[abs(nums[i])] *= -1;
                if (nums[abs(nums[i])] == 0)
                    zeroloc = abs(nums[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0 and i != zeroloc)
                return i;
        }
        return n;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
