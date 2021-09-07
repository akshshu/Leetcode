
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurs(int i, int j, string &word1, string &word2, vector<vector<int>> &dp)
    {
        if (i == word1.size())
            return word2.size() - j;
        if (j == word2.size())
            return word1.size() - i;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (word1[i] == word2[j])
        {
            dp[i][j] = recurs(i + 1, j + 1, word1, word2, dp);
        }
        else
        {
            int a = 1 + recurs(i + 1, j, word1, word2, dp);
            int b = 1 + recurs(i, j + 1, word1, word2, dp);
            int c = 1 + recurs(i + 1, j + 1, word1, word2, dp);
            dp[i][j] = min(a, min(b, c));
        }
        return dp[i][j];
    }
    int minDistance(string word1, string word2)
    {
        if (word1 == word2)
            return 0;
        vector<vector<int>> dp(word1.size(), vector<int>(word2.size(), -1));
        return recurs(0, 0, word1, word2, dp);
    }
};
int main()
{
    Solution s;
    string word1 = "horse", word2 = "ros";
    auto ans = s.minDistance(word1, word2);
    return 0;
}
