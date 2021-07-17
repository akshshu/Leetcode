
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void expandfromcenter(string s, int left, int right, int &ans)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            ans++;
            left--;
            right++;
        }
    }
    int countSubstrings(string s)
    {
        if (s.size() == 0 or s.size() == 1)
            return s.size();
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            expandfromcenter(s, i, i, ans);
            expandfromcenter(s, i, i + 1, ans);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string s1 = "asaaaasds";
    auto ans = s.countSubstrings(s1);
    return 0;
}
