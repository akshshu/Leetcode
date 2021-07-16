
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findRightInterval(vector<vector<int>> &intervals)
    {
        set<pair<int, int>> pp1;
        vector<int> ans(intervals.size(), -1);
        unordered_map<int, int> mpping;
        for (int i = 0; i < intervals.size(); i++)
        {
            pp1.insert({intervals[i][1], intervals[i][0]});
            mpping[intervals[i][0]] = i;
        }
        sort(intervals.begin(), intervals.end());
        int j = 0;
        for (auto iter = pp1.begin(); iter != pp1.end(); ++iter)
        {
            int val = iter->first;
            int val2 = iter->second;
            if (j > intervals.size() - 1)
                break;
            else
            {
                while (j < intervals.size() && intervals[j][0] <= val)
                {
                    int temp = intervals[j][0];
                    if (temp == val)
                    {
                        ans[mpping[val2]] = mpping[temp];
                        break;
                    }
                    j++;
                }
                if (j < intervals.size())
                {
                    ans[mpping[val2]] = mpping[intervals[j][0]];
                }
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> intervals = {{3, 4}, {2, 3}, {1, 2}};
    auto ans = s.findRightInterval(intervals);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
