
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        int i = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<int> ans;
        while (i < nums.size())
        {
            int j = nums.size() - 1;
            ans.push_back(sum);
            int temp = sum;
            while (j > i)
            {
                temp -= nums[j];
                j--;
                ans.push_back(temp);
            }
            sum -= nums[i];
            i++;
        }
        sort(ans.begin(), ans.end());
        int s = 0;
        for (int i = left - 1; i < right; i++)
        {
            s += ans[i];
            s = s % 1000000007;
        }
        return s;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    int left = 1, right = 5;
    auto ans = s.rangeSum(nums, 4, left, right);
    return 0;
}
