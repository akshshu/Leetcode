
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findSmallestLargest(int end, int target, vector<int> &storage)
    {
        int start = 0;
        int mid;
        int lastmaxIndex;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (storage[mid] < target)
                start = mid + 1;
            else if (storage[mid] == target)
                return mid;
            else
            {
                end = mid - 1;
                lastmaxIndex = mid;
            }
        }
        return lastmaxIndex;
    }
    int lengthOfLIS(vector<int> &nums)
    {
        //--------------------------O(n^2) solution
        // vector<int> dp(nums.size(), 1);
        // for (int i = 1; i < nums.size(); i++)
        // {
        //     for (int j = 0; j < i; j++)
        //     {
        //         if (nums[i] > nums[j])
        //         {
        //             dp[i] = max(dp[i], dp[j] + 1);
        //         }
        //     }
        // }
        // return *max_element(dp.begin(), dp.end());

        // ----------------------------nlogn Solution-------------
        vector<int> storage;
        storage.push_back(nums[0]);
        int k = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > storage[k])
            {
                storage.push_back(nums[i]);
                k++;
            }
            else
            {
                int index = findSmallestLargest(k, nums[i], storage);
                storage[index] = nums[i];
            }
        }
        return storage.size();
    }
};
int main()
{
    Solution s;
    vector<int> nums = {7, 7, 7, 7, 7, 7, 7};
    auto ans = s.lengthOfLIS(nums);
    cout << ans;
    return 0;
}
