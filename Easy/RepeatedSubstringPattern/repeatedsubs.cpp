
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        vector<int> sp(s.size(), 0);
        if (s.size() == 1 || s.size() == 0)
            return false;
        int i = 0, j = 1;
        while (j < s.size())
        {
            if (s[i] == s[j])
            {
                sp[j] = i + 1;
                j++;
                i++;
            }
            else
            {
                if (i != 0)
                    i = sp[i - 1];
                else
                    j++;
            }
        }
        if (i == 0)
            return false;
        int remaining = s.size() - i;
        return (s.size() % remaining == 0);
    }
};
int main()
{
    Solution s;
    auto ans = s.repeatedSubstringPattern("sadsdasdasd");
    return 0;
}
