
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> leftEv(n);
        vector<int> rightEv(n);
        int evenCount = 0;
        int oddCount = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] % 2 == 0)
                evenCount++;
            else
            {
                rightEv[i] = evenCount;
                evenCount = 0;
                oddCount++;
            }
        }
        evenCount = 0;
        if (oddCount < k)
            return 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
                evenCount++;
            else
            {
                leftEv[i] = evenCount;
                evenCount = 0;
            }
        }
        int i = 0, j = 0;
        oddCount = 0;
        while (i < n and nums[i] % 2 == 0)
        {
            j++;
            i++;
        }
        int ans = 0;
        while (i < n)
        {
            if (nums[i] % 2)
                oddCount++;
            if (oddCount == k)
            {
                ans = ans + ((leftEv[j] + 1) * (rightEv[i] + 1));
                while (j < n and (oddCount == k || nums[j] % 2 == 0))
                {
                    if (nums[j] % 2 == 1)
                        oddCount--;
                    j++;
                }
            }
            i++;
        }
        return ans;
    }
};
class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int &x : nums)
        {
            if (x % 2 == 0)
                x = 0;
            else
                x = 1;
        }
        int sums = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            sums += nums[i];
            if (mp.find(sums - k) != mp.end())
                count += mp[sums - k];
            mp[sums] += 1;
        }
        return count;
    }
};
