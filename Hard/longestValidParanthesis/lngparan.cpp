
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int ans = 0;
        int open = 0, close = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                open++;
            else
                close++;
            if (open == close)
                ans = max(ans, open + close);
            if (close > open)
            {
                close = 0;
                open = 0;
            }
        }
        open = 0;
        close = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '(')
                open++;
            else
                close++;
            if (open == close)
                ans = max(ans, open + close);
            if (open > close)
            {
                close = 0;
                open = 0;
            }
        }
        return ans;
    }
};
class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.empty())
                {
                    st.push(i);
                }
                else
                {
                    ans = max(ans, i - st.top());
                }
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
