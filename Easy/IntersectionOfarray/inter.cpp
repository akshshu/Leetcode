
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        unordered_map<int, int> cnt;
        for (int x : nums1)
        {
            cnt[x] = 1;
        }
        for (int x : nums2)
        {
            if (cnt[x])
            {
                ans.push_back(x);
                cnt[x] = 0;
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
