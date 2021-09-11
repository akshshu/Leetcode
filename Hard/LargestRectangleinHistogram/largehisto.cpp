
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> st;
        int n = heights.size();
        vector<int> leftMin(n);
        vector<int> rightMin(n);
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() and heights[st.back()] >= heights[i])
                st.pop_back();
            if (st.empty())
                leftMin[i] = 0;
            else
            {
                leftMin[i] = st.back() + 1;
            }
            st.push_back(i);
        }
        st.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and heights[st.back()] >= heights[i])
                st.pop_back();
            if (st.empty())
                rightMin[i] = n - 1;
            else
            {
                rightMin[i] = st.back() - 1;
            }
            st.push_back(i);
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int temp = (rightMin[i] - leftMin[i] + 1) * heights[i];
            ans = max(ans, temp);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    auto ans = s.largestRectangleArea(heights);
    return 0;
}
