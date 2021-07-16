
#include <bits/stdc++.h>
using namespace std;
// -----------------------------------------recursion with memorisation----------------
// class Solution
// {
// public:
//     int recurs(int curr, int last, vector<vector<int>> &intervals, vector<int> &dp)
//     {
//         if (curr > intervals.size() - 1)
//             return 0;
//         if (dp[curr] != -1)
//             return dp[curr];
//         for (int i = curr; i < intervals.size(); i++)
//         {
//             if (intervals[i][0] >= last)
//                 dp[curr] = max(dp[curr], 1 + recurs(i + 1, intervals[i][1], intervals, dp));
//         }
//         return dp[curr];
//     }
//     int eraseOverlapIntervals(vector<vector<int>> &intervals)
//     {
//         sort(intervals.begin(), intervals.end());
//         vector<int> dp(intervals.size(), -1);
//         return intervals.size()-recurs(0, INT_MIN, intervals, dp);
//     }
// };
// --------------------------------------iterative greedy approach----------------------
class Solution
{
public:
    static bool sortcheck(vector<int> &v1, vector<int> &v2)
    {
        return (v1[1] < v2[1]);
    }
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end(), sortcheck);
        int prev = intervals[0][1];
        int count = 0;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < prev)
                count++;
            else
                prev = intervals[i][1];
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> intervals = {{1, 2}, {2, 3}};
    auto ans = s.eraseOverlapIntervals(intervals);
    cout << intervals.size() - ans;
    return 0;
}
