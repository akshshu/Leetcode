
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int begin = 1;
        int last = pow(2, 16) - 1;
        if (num == 1)
            return true;
        while (begin <= last)
        {
            int mid = begin + (last - begin) / 2;
            unsigned int x = pow(mid, 2);
            if (x == num)
                return true;
            if (x > num)
            {
                last = mid - 1;
            }
            else
                begin = mid + 1;
        }
        return false;
    }
};
int main()
{
    Solution s;
    auto ans = s.isPerfectSquare(242);
    return 0;
}
