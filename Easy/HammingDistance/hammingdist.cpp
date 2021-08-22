
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int c1 = (x & 1 << i) ? 1 : 0;
            int c2 = (y & 1 << i) ? 1 : 0;
            ans += abs(c1 - c2);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.hammingDistance(1, 4);
    return 0;
}
