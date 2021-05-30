
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstringTwoDistinct(string &s)
    {
        int length = 0, maxLength = 0;
        unordered_map<char, int> mapping;
        int count = 0;
        int prevStart = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mapping[s[i]]++;
            length++;
            if (mapping[s[i]] == 1)
                count++;
            while (count > 2)
            {
                length--;
                if (mapping[s[prevStart]] == 1)
                    count--;
                mapping[s[prevStart++]]--;
            }
            maxLength = (length > maxLength) ? length : maxLength;
        }
        return maxLength;
    }
};
int main()
{
    Solution s;
    string st = "aaa";
    auto ans = s.lengthOfLongestSubstringTwoDistinct(st);
    cout << ans;
    return 0;
}
