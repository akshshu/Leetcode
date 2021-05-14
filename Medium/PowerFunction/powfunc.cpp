#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double recurs(double x, int n)
    {
        if (n == 0)
            return 1;
        double ans = recurs(x, n / 2);
        ans = ans * ans;
        if (n % 2)
            return ans * x;
        return ans;
    }
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        double ans = recurs(x, abs(n));
        return (n < 0) ? 1 / ans : ans;
    }
};
int main()
{
    Solution s;
    cout << s.myPow(8.84372, -5) << endl;
    return 0;
}