
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        set<int> st;
        set<int>::iterator it;
        int n = nums.size();
        if (n < 2)
            return 0;
        for (int i = 0; i < n; i++)
            st.insert(nums[i]);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            it = st.upper_bound(nums[i]);
            if (ans < (*it - nums[i]))
            {
                ans = *it - nums[i];
            }
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
