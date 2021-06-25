
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        if (c == 0)
            return true;
        unordered_map<int, int> cnt;
        while (c % 2 == 0)
        {
            cnt[2]++;
            c = c / 2;
        }

        // c must be odd at this point. So we can skip
        // one element (Note i = i +2)
        for (int i = 3; i <= sqrt(c); i = i + 2)
        {
            // While i divides c, print i and divide c
            while (c % i == 0)
            {
                cnt[i]++;
                c = c / i;
            }
        }

        // This condition is to handle the case when c
        // is a prime number greater than 2
        if (c > 2)
            cnt[c]++;
        for (auto x : cnt)
        {
            if (x.first % 4 == 3)
            {
                if (x.second % 2 != 0)
                    return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.judgeSquareSum(14);
    return 0;
}
