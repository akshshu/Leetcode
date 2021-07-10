
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        vector<int> mapping(26, 1);
        for (char c : p)
            mapping[(int)c - 'a']++;
        int j = 0;
        int matchCount = 0;
        int size = p.size();
        for (int k = 0; k < s.size(); k++)
        {
            if (mapping[(int)s[k] - 'a'])
            {
                if (mapping[(int)s[k] - 'a'] > 1)
                {
                    mapping[(int)s[k] - 'a']--;
                    matchCount++;
                    if (matchCount == size)
                    {
                        ans.push_back(j);
                        matchCount--;
                        mapping[(int)s[j++] - 'a']++;
                    }
                }
                else
                {
                    while (s[k] != s[j])
                    {
                        matchCount--;
                        mapping[(int)s[j] - 'a']++;
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
        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "cbaebabacd", s2 = "abc";
    auto ans = s.findAnagrams(s1, s2);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
