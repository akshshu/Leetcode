
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubstring(string s, int k)
    {
        unordered_map<char, int> mapping;
        int size = s.size();
        if (size == 0 || size < k)
            return 0;
        if (k <= 1)
            return size;
        for (char x : s)
            mapping[x]++;
        int l = 0;
        while (l < size && mapping[s[l]] >= k)
            l++;
        if (l >= size - 1)
            return l;
        int l1 = longestSubstring(s.substr(0, l), k);
        while (l < size && mapping[s[l]] < k)
            l++;
        int l2 = longestSubstring(s.substr(l), k);
        return (max(l1, l2));
    }
};
int main()
{
    Solution s;
    string st = "abba";
    auto ans = s.longestSubstring(st, 3);
    cout << ans;
    return 0;
}
