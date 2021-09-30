
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestBeautifulSubstring(string word)
    {
        int n = word.size();
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int j = 0, i = 0;
        int charPos = 0;
        int ans = 0;
        for (i = 0; i < n; i++)
        {
            if (word[i] == vowels[charPos])
            {
                while (i < n and word[i] == vowels[charPos])
                    i++;
                if (charPos == 4)
                {
                    ans = max(ans, i - j);
                    j = i;
                }
                charPos = charPos + 1;
                charPos %= 5;
                i--;
            }
            else
            {
                if (word[i] == 'a')
                {
                    j = i;
                    i = i - 1;
                }
                else
                    j = i + 1;
                charPos = 0;
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
