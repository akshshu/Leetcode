
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        stack<int> st;
        int n = nums.size();
        vector<int> leftLimit(n);
        vector<int> rightLimit(n);
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() and nums[st.top()] > nums[i])
                st.pop();
            if (st.empty())
                leftLimit[i] = 0;
            else
                leftLimit[i] = st.top() + 1;
            st.push(i);
        }

        while (!st.empty())
        {
            st.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and nums[st.top()] < nums[i])
                st.pop();
            if (st.empty())
                rightLimit[i] = n - 1;
            else
                rightLimit[i] = st.top() - 1;
            st.push(i);
        }

        int mxrightL = INT_MIN;
        int minleftL = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (leftLimit[i] != i)
                minleftL = min(minleftL, leftLimit[i]);
            if (rightLimit[i] != i)
                mxrightL = max(mxrightL, rightLimit[i]);
        }
        if (minleftL != INT_MAX)
            return mxrightL - minleftL + 1;
        return 0;
    }
};
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        int start = -1;
        int end = -1;
        int n = nums.size();
        int prevHigh = n - 1;
        int prevLow = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < nums[prevLow])
                end = i;
            else
                prevLow = i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[prevHigh])
                start = i;
            else
                prevHigh = i;
        }
        return (start >= 0) ? end - start + 1 : 0;
    }
};

int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
