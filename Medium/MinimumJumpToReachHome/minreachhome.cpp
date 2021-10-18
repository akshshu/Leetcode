
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumJumps(vector<int> &forbidden, int a, int b, int x)
    {
        unordered_map<int, unordered_set<int>> mp;
        unordered_map<int, int> mp2;
        for (int x : forbidden)
            mp2[x] = 1;
        queue<pair<int, int>> q;
        q.push({1, 0});
        int step = 0;
        while (!q.empty())
        {
            int s = q.size();
            while (s--)
            {
                auto tp = q.front();
                q.pop();
                if (tp.second == x)
                    return step;
                if (mp[1].find(tp.second + a) == mp[1].end() and !mp2[tp.second + a] and tp.second + a <= 6000)
                {
                    mp[1].insert(tp.second + a);
                    q.push({1, tp.second + a});
                }
                if (tp.first != 0 and tp.second - b > 0 and mp[0].find(tp.second - b) == mp[0].end() and !mp2[tp.second - b])
                {
                    mp[0].insert(tp.second - b);
                    q.push({0, tp.second - b});
                }
            }
            step++;
        }
        return -1;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
