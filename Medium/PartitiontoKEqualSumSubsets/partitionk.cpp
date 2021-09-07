
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool recurs(int count, int currSum, int index, int k, vector<int> &nums, int &ReqSum, vector<int> &visited)
    {
        if (count == k - 1)
            return true;
        if (currSum > ReqSum)
            return false;
        if (currSum == ReqSum)
            return recurs(count + 1, 0, 0, k, nums, ReqSum, visited);

        for (int i = index; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                visited[i] = 1;
                if (recurs(count, currSum + nums[i], i + 1, k, nums, ReqSum, visited))
                    return true;
                visited[i] = 0;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int> &nums, int k)
    {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        if (totalSum % k != 0)
            return false;
        int ReqSum = totalSum / k;
        vector<int> visited(nums.size());
        sort(nums.begin(), nums.end(), greater<int>());
        return recurs(0, 0, 0, k, nums, ReqSum, visited);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 3, 2, 3, 5, 2, 1};
    int k = 4;
    auto ans = s.canPartitionKSubsets(nums, k);
    return 0;
}
