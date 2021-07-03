
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int minProd = 1, maxProd = 1, ans = INT_MIN;
        for (int &x : nums)
        {
            maxProd *= x;
            minProd *= x;
            if (x < 0)
                swap(maxProd, minProd);
            ans = max(maxProd, ans);
            if (x == 0)
            {
                maxProd = 1;
                minProd = 1;
            }
            minProd = min(1, minProd);
            maxProd = max(1, maxProd);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 3, -2, 4};
    auto ans = s.maxProduct(nums);
    cout << ans;
    return 0;
}
