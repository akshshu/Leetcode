
#include <bits/stdc++.h>
using namespace std;
//Without modifying given array;
// class Solution
// {
// public:
//     vector<int> dp;
//     bool recurs(vector<int> &arr, int pos)
//     {
//         if ((pos > arr.size() - 1) || (pos < 0) || (dp[pos] == 0))
//             return false;
//         if (dp[pos] == 1 || arr[pos] == 0)
//             return true;
//         dp[pos] = 0;
//         dp[pos] = ((recurs(arr, pos + arr[pos])) || (recurs(arr, pos - arr[pos]))) ? 1 : 0;
//         return dp[pos];
//     }
//     bool canReach(vector<int> &arr, int start)
//     {
//         if (arr[start] == 0)
//             return true;
//         dp.resize(arr.size());
//         fill(dp.begin(), dp.end(), -1);
//         dp[start] = 0;
//         return (recurs(arr, start + arr[start]) || recurs(arr, start - arr[start]));
//     }
// };
// if modification allowed
class Solution
{
public:
    bool canReach(vector<int> &arr, int start)
    {
        if (start < 0 || start > arr.size() - 1 || arr[start] == -1)
            return false;
        if (arr[start] == 0)
            return true;
        int var = arr[start];
        arr[start] = -1;
        return (canReach(arr, start + var) || canReach(arr, start - var));
    }
};
int main()
{
    Solution s;
    vector<int> nums = {58, 48, 64, 36, 19, 19, 67, 13, 32, 2, 59, 50, 29, 68, 50, 0, 69, 31, 54, 20, 22, 43, 30, 9, 68, 71, 20, 22, 48, 74, 2, 65, 27, 54, 30, 5, 66, 24, 64, 68, 9, 31, 50, 59, 15, 72, 6, 49, 11, 71, 12, 61, 5, 66, 30, 1, 2, 39, 59, 35, 53, 21, 76, 17, 71, 40, 68, 57, 64, 53, 70, 21, 50, 49, 25, 63, 35};
    int start = 46;
    auto ans = s.canReach(nums, start);
    cout << ans;
    return 0;
}
