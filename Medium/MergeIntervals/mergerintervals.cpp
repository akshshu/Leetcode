
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    vector<vector<int>> ans2;

    vector<vector<int>> sortApproach(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        int lowerend = intervals[0][0];
        int upperend = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
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
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<int> storage(10001, -1);
        for (auto pair : intervals)
        {
            if (storage[pair[0]] < pair[1])
            {
                storage[pair[0]] = pair[1];
            }
        }
        int lowerIndex = 1, upperIndex = 1;
        //using the fact that pair values are in the range [0,10000]
        for (int i = 0; i < 10001; i++)
        {
            if (storage[i] > -1)
            {
                lowerIndex = i;
                upperIndex = storage[i];
                while ((++i) <= upperIndex)
                {
                    if (storage[i] > upperIndex)
                        upperIndex = storage[i];
                }
                ans2.push_back({lowerIndex, upperIndex});
                i = i - 1;
            }
        }
        return ans2;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> intervals{{1, 3}, {3, 10}, {2, 4}, {15, 18}};
    vector<vector<int>> intervals2{{1, 4}, {4, 5}};

    auto ans = s.sortApproach(intervals);
    auto ans2 = s.merge(intervals2);

    // sort(intervals.begin(), intervals.end());
    for (auto x : ans)
    {
        cout << x[0] << " " << x[1] << endl;
    }
    cout << "----------------------" << endl;
    for (auto x : ans2)
    {
        cout << x[0] << " " << x[1] << endl;
    }
    return 0;
}
