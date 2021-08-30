
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans = 0;
    void recurs(int n, vector<int> &nums, int val)
    {
        if (val > n)
        {
            ans++;
            return;
        }
        for (int i = 1; i <= n; i++)
        {
            if (nums[i] == 0 and (i % val == 0 or val % i == 0))
            {
                nums[i] = val;
                recurs(n, nums, val + 1);
                nums[i] = 0;
            }
        }
    }
    int countArrangement(int n)
    {
        vector<int> nums(n + 1, 0);
        recurs(n, nums, 1);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.countArrangement(4);
    return 0;
}
