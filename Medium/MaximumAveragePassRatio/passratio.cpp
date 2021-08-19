
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double maxAverageRatio(vector<vector<int>> &classes, int extraStudents)
    {
        priority_queue<pair<double, int>> pq;
        for (int i = 0; i < classes.size(); i++)
        {
            double change = (((double)classes[i][0] + 1) / ((double)(classes[i][1] + 1)) - ((double)classes[i][0]) / (double)classes[i][1]);
            pq.push(make_pair(change, i));
        }
        while (extraStudents--)
        {
            int i = pq.top().second;
            pq.pop();
            classes[i][0] += 1;
            classes[i][1] += 1;
            double change = (((double)classes[i][0] + 1) / ((double)(classes[i][1] + 1)) - ((double)classes[i][0]) / (double)classes[i][1]);
            pq.push(make_pair(change, i));
        }

        double ans = 0;
        for (int i = 0; i < classes.size(); i++)
            ans += ((double)classes[i][0] / (double)classes[i][1]);
        ans = ans / classes.size();
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.maxAverageRatio();
    return 0;
}
