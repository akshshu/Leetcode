
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool find132pattern(vector<int> &nums)
    {

        int n = nums.size();

        stack<int> stk;

        int top = INT_MIN;

        for (int i = n - 1; i >= 0; i--)
        {

            if (nums[i] < top)
            {
                return true;
            }
            while (stk.empty() == false && nums[i] > stk.top())
            {
                top = stk.top();
                stk.pop();
            }
            cout << top << endl;
            stk.push(nums[i]);
        }

        return false;
    }
};
class Solution
{
public:
    bool find132pattern(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ival(n);
        ival[0] = nums[0];
        int minz = nums[0];
        for (int i = 1; i < n; i++)
        {
            minz = min(minz, nums[i - 1]);
            ival[i] = minz;
        }
        stack<int> st;
        st.push(nums[n - 1]);
        for (int j = n - 2; j >= 1; j--)
        {
            while (!st.empty() && st.top() <= ival[j])
                st.pop();
            if (!st.empty())
                if (st.top() < nums[j])
                    return true;
            st.push(nums[j]);
        }

        return false;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 1, 4, 2};
    auto ans = s.find132pattern(nums);
    return 0;
}
