
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int k = 5;
        int count = 0;
        while (n / k)
        {
            count += n / k;
            k *= 5;
        }
        return count;
    }
};
int main()
{
    Solution s;
    int n = 5;
    auto ans = s.trailingZeroes(n);
    return 0;
}
