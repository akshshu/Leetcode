
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mapping;
        int prevStart = 0;
        int length = 0;
        int maxLength = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mapping[s[i]]++;
            length++;
            if (mapping[s[i]] > 1)
            {
                while (mapping[s[i]] > 1)
                {
                    length--;
                    mapping[s[prevStart++]]--;
                }
            }
            maxLength = (length > maxLength) ? length : maxLength;
        }
        return maxLength;
    }
};
int main()
{
    Solution s;
    string st = "";
    auto ans = s.lengthOfLongestSubstring(st);
    cout << ans;
    return 0;
}
