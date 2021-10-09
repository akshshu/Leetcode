
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, int> vals;
    int helper(vector<vector<int>> &dp, int next, int last, int n)
    {

        int index = vals[next];
        if (index == n - 1)
            return 1;
        if (dp[last][index] != -1)
            return dp[last][index];
        int temp = 0;
        if (vals.find(next + last + 1) != vals.end())
            temp = temp | helper(dp, next + last + 1, last + 1, n);
        if (vals.find(next + last) != vals.end())
            temp = temp | helper(dp, next + last, last, n);
        if (vals.find(next + last - 1) != vals.end() and last != 1)
            temp = temp | helper(dp, next + last - 1, last - 1, n);
        dp[last][index] = temp;
        return dp[last][index];
    }
    bool canCross(vector<int> &stones)
    {
        int n = stones.size();
        vector<vector<int>> dp(2005, vector<int>(n, -1));
        for (int i = 0; i < n; i++)
            vals[stones[i]] = i;
        if (n > 1 and stones[1] != 1)
            return false;
        int temp = helper(dp, 1, 1, n);
        return (temp == 1);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
