
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int count = 0;
        if (n == 0)
            return false;
        while (n)
        {
            if (n & 1)
            {
                if (count)
                    return false;
                count++;
            }
            n = n >> 1;
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.isPowerOfTwo(4);
    return 0;
}
