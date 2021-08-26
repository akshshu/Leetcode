
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countNumbersWithUniqueDigits(int n)
    {
        if (n == 0)
            return 1;
        int j = 0;
        int ans = 10;
        int prod = 9;
        int x = 9;
        while (j < n - 1)
        {
            prod = prod * x;
            ans += prod;
            j++;
            x--;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
