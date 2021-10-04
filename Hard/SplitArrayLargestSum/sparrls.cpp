
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPossible(int mid, vector<int> &nums, int m)
    {
        int sums = 0;
        int count = 1;
        for (int x : nums)
        {
            sums += x;
            if (sums > mid)
            {
                count++;
                sums = x;
            }
        }
        return (count <= m) ? true : false;
    }
    int splitArray(vector<int> &nums, int m)
    {
        int arrSum = 0;
        int mxNum = 0;
        int n = nums.size();
        for (int x : nums)
        {
            arrSum += x;
            mxNum = (mxNum < x) ? x : mxNum;
        }
        if (n == m)
            return mxNum;
        int high = arrSum, low = mxNum;
        int ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isPossible(mid, nums, m))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
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
