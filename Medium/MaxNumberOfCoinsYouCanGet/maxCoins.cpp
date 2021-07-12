
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end(), greater<int>());
        int i = 0, k = piles.size() - 1;
        int ans = 0;
        while (i + 1 < k)
        {
            ans += piles[i + 1];
            k--;
            i += 2;
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
