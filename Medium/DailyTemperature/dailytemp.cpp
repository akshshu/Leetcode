
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> st;
        int n = temperatures.size();
        vector<int> days(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and temperatures[st.top()] <= temperatures[i])
            {
                days[i] += days[st.top()];
                st.pop();
            }
            if (st.empty())
                days[i] = 0;
            if (!st.empty())
                days[i] += 1;
            st.push(i);
        }
        return days;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
