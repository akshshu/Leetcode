
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        int m = nums1.size(), n = nums2.size();
        for (int i = 0; i < n; i++)
            mp[nums2[i]] = i;
        stack<int> st;
        st.push(nums2[n - 1]);
        nums2[n - 1] = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            while (!st.empty() and nums2[i] > st.top())
                st.pop();
            int x = nums2[i];
            if (st.empty())
                nums2[i] = -1;
            else
                nums2[i] = st.top();
            st.push(x);
        }
        for (int i = 0; i < m; i++)
            nums1[i] = nums2[mp[nums1[i]]];
        return nums1;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
