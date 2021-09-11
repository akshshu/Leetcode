
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {

        int i = 0;
        int ans = 0;
        int l = nums.size();
        while (i < l - 2)
        {
            if (nums[i + 1] - nums[i] == nums[i + 2] - nums[i + 1])
            {
                int k = 1;
                int j = i + 3;
                int diff = nums[i + 1] - nums[i];
                while (j < nums.size() and nums[j] - nums[j - 1] == diff)
                {
                    k++;
                    j++;
                }
                ans += k * (k + 1) / 2;
                i = j - 1;
            }
            else
                i++;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
