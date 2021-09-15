
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        if (m > n)
            return findMedianSortedArrays(nums2, nums1);
        int start = 0, end = m - 1;
        int numsReq = (m + n + 1) / 2;
        while (true)
        {
            int cut1 = start + (end - start) / 2;
            if (end < 0)
                cut1 = -1;
            int num = cut1 + 1;
            int cut2 = numsReq - num - 1;
            int l1, l2, r1, r2;
            l1 = (cut1 < 0) ? INT_MIN : nums1[cut1];
            l2 = (cut2 < 0) ? INT_MIN : nums2[cut2];

            r1 = (cut1 + 1 >= m) ? INT_MAX : nums1[cut1 + 1];
            r2 = (cut2 + 1 >= n) ? INT_MAX : nums2[cut2 + 1];
            if (l1 <= r2 and l2 <= r1)
            {
                if ((m + n) % 2)
                    return max(l1, l2);
                else
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
            else
            {
                if (l1 > r2)
                    end = cut1 - 1;
                else
                    start = cut1 + 1;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
