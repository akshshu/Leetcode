
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> ans(m + n, 0);
        int i = 0, j = 0;
        int k = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                ans[k++] = nums1[i];
                i++;
            }
            else
            {
                ans[k++] = nums2[j];
                j++;
            }
        }
        while (i < m)
        {
            ans[k++] = nums1[i++];
        }
        while (j < n)
        {
            ans[k++] = nums2[j++];
        }
        for (int i = 0; i < m + n; i++)
        {
            nums1[i] = ans[i];
        }
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
