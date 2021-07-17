
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int expandfromcenter(string s, int left, int right)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return right - left - 1;
    }
    string longestPalindrome(string s)
    {
        if (s.size() == 0 or s.size() == 1)
            return s;
        int ans_len = 0;
        int start = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int len1 = expandfromcenter(s, i, i);
            int len2 = expandfromcenter(s, i, i + 1);
            len1 = max(len1, len2);
            if (len1 > ans_len)
            {
                start = i - (len1 - 1) / 2;
                ans_len = len1;
            }
        }
        return s.substr(start, ans_len);
    }
};
int main()
{
    Solution s;
    string s1 = "asdapspsaaslpspsppspssdasfasfasfa";
    cout << s.longestPalindrome(s1);
    return 0;
}
