
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calcDistance(vector<int> &p1, vector<int> &p2)
    {
        return (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
    }
    int numberOfBoomerangs(vector<vector<int>> &points)
    {
        int ans = 0;
        for (int i = 0; i < points.size(); i++)
        {
            unordered_map<int, int> disCount;
            for (int j = 0; j < points.size(); j++)
            {
                if (i == j)
                    continue;
                int dis = calcDistance(points[i], points[j]);
                disCount[dis]++;
                if (disCount[dis] > 1)
                {
                    ans -= ((disCount[dis] - 1) * (disCount[dis] - 2));
                    ans += disCount[dis] * (disCount[dis] - 1);
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> points = {{0, 0}, {1, 0}, {2, 0}};
    auto ans = s.numberOfBoomerangs(points);
    return 0;
}
