
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        unordered_map<char, int> mp;
        int n = s.size();
        int ans = 0;
        int left = 0;
        int right = 0;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            while (mp['a'] and mp['b'] and mp['c'])
            {
                ans += (n - i);
                mp[s[left]]--;
                left++;
            }
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
