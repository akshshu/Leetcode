
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int j = 0, i = 0;
        int ans = 1;
        int maxK = 0;
        unordered_map<char, int> mp;
        for (i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            maxK = max(mp[s[i]], maxK);
            if (i - j + 1 > maxK + k)
            {
                mp[s[j]]--;
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
