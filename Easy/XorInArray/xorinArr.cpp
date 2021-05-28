
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        vector<int> nums;
        int x = start;
        for (int i = 1; i < n; i++)
        {
            x = x ^ (start + 2 * i);
        }
        return x;
    }
};
int main()
{
    Solution s;
    auto ans = s.xorOperation(5, 5);
    return 0;
}
