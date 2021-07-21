
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isperfectSquare(int n)
    {
        double res = sqrt(n);
        if (ceil(res) == floor(res))
            return true;
        return false;
    }
    int numSquares(int n)
    {
        if (isperfectSquare(n))
            return 1;
        while (n % 4 == 0)
        {
            n /= 4;
        }
        if (n % 8 == 7)
            return 4;
        for (int i = 1; i <= sqrt(n); i++)
        {
            int other = n - (i * i);
            if (isperfectSquare(other))
                return 2;
        }
        return 3;
    }
};
int main()
{
    Solution s;
    auto ans = s.numSquares(123);
    return 0;
}
