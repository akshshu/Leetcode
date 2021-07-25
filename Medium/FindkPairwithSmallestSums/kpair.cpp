
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool demosort(vector<int> &a, vector<int> &b)
    {
        if (a[0] + a[1] < b[0] + b[1])
            return true;
        if (a[0] + a[1] == b[0] + b[1] && a[0] < b[0])
            return true;
        return false;
    }
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> ans;
        for (int x : nums1)
            for (int y : nums2)
                ans.push_back({x, y});
        sort(ans.begin(), ans.end(), demosort);
        int tobedel = ans.size() - k;
        while (tobedel > 0)
        {
            ans.pop_back();
            tobedel--;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums1 = {1, 7, 11};
    vector<int> nums2 = {2, 4, 6};
    int k = 3;
    auto ans = s.kSmallestPairs(nums1, nums2, k);
    return 0;
}
