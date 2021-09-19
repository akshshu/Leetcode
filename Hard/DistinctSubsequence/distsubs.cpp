
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int helper(string &s, string &t, int sIndex, int tIndex, vector<vector<int>> &dp)
    {
        if (tIndex == t.size())
            return 1;
        if (sIndex == s.size() or tIndex == t.size() or (s.size() - sIndex < t.size() - tIndex < 0))
            return 0;
        if (dp[sIndex][tIndex] != -1)
            return dp[sIndex][tIndex];

        if (s[sIndex] != t[tIndex])
            dp[sIndex][tIndex] = helper(s, t, sIndex + 1, tIndex, dp);
        else
            dp[sIndex][tIndex] = helper(s, t, sIndex + 1, tIndex, dp) + helper(s, t, sIndex + 1, tIndex + 1, dp);
        return dp[sIndex][tIndex];
    }
    int numDistinct(string s, string t)
    {
        vector<vector<int>> dp(s.size(), vector<int>(t.size(), -1));
        return helper(s, t, 0, 0, dp);
    }
};
class Solution
{
public:
    //     int helper(string &s,string &t,int sIndex,int tIndex,vector<vector<int>>&dp){
    //         if(tIndex==t.size())
    //             return 1;
    //         if(sIndex==s.size() or tIndex==t.size() or (s.size()-sIndex<t.size()-tIndex<0))
    //             return 0;
    //         if(dp[sIndex][tIndex]!=-1)
    //             return dp[sIndex][tIndex];

    //         if(s[sIndex]!=t[tIndex])
    //             dp[sIndex][tIndex]=helper(s,t,sIndex+1,tIndex,dp);
    //         else
    //             dp[sIndex][tIndex]=helper(s,t,sIndex+1,tIndex,dp)+helper(s,t,sIndex+1,tIndex+1,dp);
    //         return dp[sIndex][tIndex];

    //     }
    int numDistinct(string s, string t)
    {
        vector<vector<unsigned long long>> dp(s.size() + 1, vector<unsigned long long>(t.size() + 1, 0));
        for (int i = 0; i < s.size() + 1; i++)
            dp[i][t.size()] = 1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            for (int j = t.size() - 1; j >= 0; j--)
            {
                if (s[i] == t[j])
                {
                    dp[i][j] = dp[i + 1][j] + dp[i + 1][j + 1];
                }
                else
                    dp[i][j] = dp[i + 1][j];
            }
        }
        return dp[0][0];
        // return helper(s,t,0,0,dp);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
