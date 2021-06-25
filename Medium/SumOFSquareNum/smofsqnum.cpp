
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        if (c == 0)
            return true;
        while (c % 2 == 0)
            c = c / 2;

        // c must be odd at this point. So we can skip
        // one element (Note i = i +2)
        for (int i = 3; i <= sqrt(c); i = i + 2)
        {
            int cnt = 0;
            if (c % i == 0)
            {
                while (c % i == 0)
                {
                    cnt++;
                    c = c / i;
                }
                if (cnt % 2 != 0 && i % 4 == 3)
                    return false;
            }
        }
        return c % 4 != 3;
    }
};
int main()
{
    Solution s;
    auto ans = s.judgeSquareSum(14);
    return 0;
}
