
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool hasAlternatingBits(int n)
    {

        int prevBit = (n & 1) ? 1 : 0;
        cout << prevBit << endl;
        n = n >> 1;
        while (n)
        {
            if (prevBit == (n & 1))
                return false;
            prevBit = n & 1;
            n = n >> 1;
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.hasAlternatingBits(11);
    return ans;
    return 0;
}
