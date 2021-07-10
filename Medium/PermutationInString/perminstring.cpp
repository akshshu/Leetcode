
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s, string s2)
    {
        vector<int> mapping(26, 1);
        for (char c : s)
            mapping[(int)c - 'a']++;
        int j = 0;
        int matchCount = 0;
        int size = s.size();
        for (int k = 0; k < s2.size(); k++)
        {
            if (mapping[(int)s2[k] - 'a'])
            {
                if (mapping[(int)s2[k] - 'a'] > 1)
                {
                    mapping[(int)s2[k] - 'a']--;
                    matchCount++;
                    if (matchCount == size)
                    {
                        return true;
                    }
                }
                else
                {
                    while (s2[k] != s2[j])
                    {
                        matchCount--;
                        mapping[(int)s2[j] - 'a']++;
                        j++;
                    }
                    j++;
                }
            }
            else
            {
                j = k + 1;
                matchCount = 0;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    string s1 = "ab", s2 = "eidbaooo";
    auto ans = s.checkInclusion(s1, s2);
    cout << ans;
    return 0;
}
