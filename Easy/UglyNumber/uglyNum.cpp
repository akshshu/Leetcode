
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return false;
        int check[3] = {2, 3, 5};
        int i = 0;
        while (i < 3)
        {
            while (n % check[i] == 0)
            {
                n /= check[i];
            }
            i++;
        }
        return (n == 1);
    }
};
int main()
{
    Solution s;
    auto ans = s.isUgly(12312);
    return 0;
}
