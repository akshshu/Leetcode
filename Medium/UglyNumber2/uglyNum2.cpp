
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if (n <= 5)
            return n;
        vector<int> ans(n, 0);
        int pt1 = 0, pt2 = 0, pt3 = 0;
        ans[0] = 1;
        for (int i = 1; i < n; i++)
        {
            int next_el = min(ans[pt1] * 2, min(ans[pt2] * 3, ans[pt3] * 5));
            if (ans[pt1] * 2 == next_el)
                pt1++;
            if (ans[pt2] * 3 == next_el)
                pt2++;
            if (ans[pt3] * 5 == next_el)
                pt3++;
            ans[i] = next_el;
        }
        return ans[n - 1];
    }
};
int main()
{
    Solution s;
    auto ans = s.nthUglyNumber(10);
    return 0;
}
