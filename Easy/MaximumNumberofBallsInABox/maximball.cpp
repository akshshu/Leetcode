
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countBalls(int lowLimit, int highLimit)
    {
        unordered_map<int, int> dp;
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int j = i;
            int p = 0;
            while (j)
            {
                int k = j % 10;
                p += k;
                j = j / 10;
            }
            dp[p]++;
        }
        int max = INT_MIN;
        for (auto &x : dp)
        {
            if (x.second > max)
                max = x.second;
        }
        return max;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
