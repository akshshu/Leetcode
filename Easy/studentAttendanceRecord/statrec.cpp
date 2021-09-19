
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkRecord(string s)
    {
        int absentCount = 0;
        int consecL = 0;
        for (char x : s)
        {
            if (x == 'A')
            {
                if (absentCount)
                    return false;
                absentCount++;
                consecL = 0;
            }
            else if (x == 'P')
                consecL = 0;
            else
            {
                if (consecL == 2)
                    return false;
                consecL++;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
