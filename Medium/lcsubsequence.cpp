// Given two strings text1 and text2, return the length of their longest common subsequence.If there is no common subsequence, return 0.

//     A subsequence of a string is a new string generated from the original string with some
//     characters(can be none) deleted without changing the relative order of the remaining characters.

//     For example,
//     "ace" is a subsequence of "abcde".A common subsequence of two strings is a subsequence that is common to both strings.
#include "headers.h"

class Solution
{
public:
    int maxlength;
    string longeststring = "";
    int longestCommonSubsequence(string s1, string s2)
    {
        int lcsarr[s1.size() + 1][s2.size() + 1];
        for (int i = 0; i <= s1.size(); i++)
        {
            for (int j = 0; j <= s2.size(); j++)
            {
                if (i == 0 || j == 0)
                {
                    lcsarr[i][j] = 0;
                }
                else if (s1[i - 1] == s2[j - 1])
                {
                    lcsarr[i][j] = 1 + lcsarr[i - 1][j - 1];
                }
                else
                {
                    lcsarr[i][j] = max(lcsarr[i][j - 1], lcsarr[i - 1][j]);
                }
            }
        }
        // cout << lcsarr[s1.size()][s2.size()];
        return lcsarr[s1.size()][s2.size()];

        // maxlength = lcsarr[s1.size()][s2.size()];
        // int prev = 0;
        // for (int i = 1; i <= s1.size(); i++)
        // {
        //     if (lcsarr[i][s2.size()] != prev)
        //     {
        //         longeststring += s1[i - 1];
        //         prev = lcsarr[i][s2.size()];
        //     }
        // }
    }
};
int main()
{

    Solution s;
    string s1, s2;
    cin >> s1 >> s2;
    cout << s.longestCommonSubsequence(s1, s2);
    // cout << "max" << s.maxlength;
    return 0;
}