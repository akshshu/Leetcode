
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minInsertions(string s)
    {
        int closeCount = 0;
        int openCount = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                closeCount++;
                if (closeCount == 2)
                {
                    if (openCount == 0)
                        ans += 1;
                    else
                        openCount--;
                    closeCount = 0;
                }
            }
            else
            {
                if (closeCount == 0)
                    openCount++;
                else
                {
                    ans += 1;
                    closeCount--;
                    if (openCount == 0)
                        ans += 1;
                    else
                        openCount--;
                    openCount++;
                }
            }
        }
        if (closeCount)
        {
            ans += 1;
            closeCount--;
            if (openCount == 0)
                ans += 1;
            else
                openCount--;
        }
        while (openCount > 0)
        {
            ans += 2;
            openCount--;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "(()))";
    auto ans = s.minInsertions(s1);
    return 0;
}
