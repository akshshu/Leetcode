
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n)
        {
            if (n & 1)
                count++;
            n = n >> 1;
        }
        return count;
    }
};
int main()
{
    Solution s;
    auto ans = s.hammingWeight(123);
    cout << ans;
    return 0;
}
