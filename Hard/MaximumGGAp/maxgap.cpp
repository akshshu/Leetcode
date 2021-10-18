
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
            return 0;
        int maxEl = *max_element(nums.begin(), nums.end());
        int minEl = *min_element(nums.begin(), nums.end());
        int numBuckets = n - 1;
        int bucketSize = ceil((double)(maxEl - minEl) / numBuckets);
        vector<int> minStorage(n - 1, INT_MAX);
        vector<int> maxStorage(n - 1, INT_MIN);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == maxEl or nums[i] == minEl)
                continue;
            int bucketIndex = (nums[i] - minEl) / bucketSize;
            minStorage[bucketIndex] = min(minStorage[bucketIndex], nums[i]);
            maxStorage[bucketIndex] = max(maxStorage[bucketIndex], nums[i]);
        }
        int ans = 0;
        int previousMax = minEl;
        for (int i = 0; i < numBuckets; i++)
        {
            if (minStorage[i] == INT_MAX)
                continue;
            ans = max(ans, minStorage[i] - previousMax);
            previousMax = maxStorage[i];
        }
        ans = max(maxEl - previousMax, ans);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
