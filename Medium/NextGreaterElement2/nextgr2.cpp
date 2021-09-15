
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> rightMax(n, -1000000001);
        vector<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() and nums[i] >= st.back())
                st.pop_back();
            if (st.size())
                rightMax[i] = st.back();
            st.push_back(nums[i]);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (rightMax[i] == -1000000001)
            {
                while (st.size() and nums[i] >= st.back())
                    st.pop_back();
                if (st.size())
                    rightMax[i] = st.back();
                else
                    rightMax[i] = -1;
            }
        }

        return rightMax;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> st;
        for (int i = n - 1; i >= 0; i--)
            st.push_back(nums[i]);
        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() and nums[i] >= st.back())
                st.pop_back();
            if (st.size())
                ans[i] = st.back();
            else
                ans[i] = -1;
            st.push_back(nums[i]);
        }

        return ans;
    }
};