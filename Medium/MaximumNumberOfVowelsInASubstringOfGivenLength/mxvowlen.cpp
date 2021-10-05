
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxVowels(string s, int k)
    {
        unordered_map<char, int> mp;
        mp['a'] = 1;
        mp['e'] = 1;
        mp['i'] = 1;
        mp['o'] = 1;
        mp['u'] = 1;
        int vowelCount = 0;
        int n = s.size();
        int i = 0, j = 0;
        int ans = 0;
        while (i < n)
        {
            if (mp[s[i]])
                vowelCount++;
            if (i - j + 1 == k)
            {
                ans = max(ans, vowelCount);
                if (mp[s[j]])
                    vowelCount--;
                j++;
            }
            i++;
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
