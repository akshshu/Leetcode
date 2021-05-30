
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstringKDistinct(string &s, int k)
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
            while (count > k)
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
    string st = "eceba";
    auto ans = s.lengthOfLongestSubstringKDistinct(st, 3);
    cout << ans;
    return 0;
}
