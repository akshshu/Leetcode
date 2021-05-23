
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        int m = intervals.size();
        int i;
        for (i = 0; i < intervals.size(); i++)
        {
            if (newInterval[0] <= intervals[i][0])
            {

                intervals.insert(intervals.begin() + i, newInterval);
                break;
            }
        }
        if (m == intervals.size())
        {
            intervals.insert(intervals.begin() + i, newInterval);
        }
        int lowerend = intervals[0][0];
        int upperend = intervals[0][1];
        for (i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= upperend)
            {
                if (intervals[i][1] > upperend)
                    upperend = intervals[i][1];
            }
            else
            {
                ans.push_back({lowerend, upperend});
                lowerend = intervals[i][0];
                upperend = intervals[i][1];
            }
        }
        ans.push_back({lowerend, upperend});

        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> n{{1, 3}, {6, 9}};
    vector<int> newInterval = {9, 12};
    auto ans = s.insert(n, newInterval);
    for (auto x : ans)
    {
        cout << x[0] << " " << x[1] << endl;
    }
    return 0;
}
