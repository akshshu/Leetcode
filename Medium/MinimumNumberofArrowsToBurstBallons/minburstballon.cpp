
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool sortcheck(vector<int> &v1, vector<int> &v2)
    {
        return (v1[1] < v2[1]);
    }

    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end(), sortcheck);
        int prev = points[0][1];
        int count = 0;
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] <= prev)
                count++;
            else
                prev = points[i][1];
        }
        return points.size() - count;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> points = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    auto ans = s.findMinArrowShots(points);
    cout << ans;
    return 0;
}
