
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = 0;
        int ans = 0;
        long long total = 0;
        while (i < n)
        {
            total += nums[i];
            while ((long)(long)nums[i] * (i - j + 1) > total + k)
                total -= nums[j++];
            ans = max(ans, i - j + 1);
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
