
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans(n + 1, 0);
        ans[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                ans[i] = 1 + ans[(i - 1) / 2];
            else
                ans[i] = ans[i / 2];
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
