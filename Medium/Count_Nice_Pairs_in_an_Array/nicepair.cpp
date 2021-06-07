
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse2(int k)
    {
        int sum = 0;
        while (k)
        {
            sum = sum * 10 + (k % 10);
            k = k / 10;
        }
        return sum;
    }
    int countNicePairs(vector<int> &nums)
    {
        unordered_map<int, int> kp;
        int count = 0;
        for (int x : nums)
        {
            x = x - reverse2(x);
            count = (count + kp[x]) % 1000000007;
            kp[x]++;
        }

        return count;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {42, 11, 1, 97};
    auto ans = s.countNicePairs(nums);
    cout << ans;
    return 0;
}
