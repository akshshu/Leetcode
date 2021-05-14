#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        stack<char> st;
        char prevchar = ' ';
        for (auto x : s)
        {
            st.push(x);
        }
        for (int i = p.size() - 1; i >= 0; i--)
        {
            if (p[i] == '.')
            {
                if (prevchar == '*')
                {
                    while (i && (p[i - 1] == '.'))
                        i--;
                    if (i == 0)
                        return true;
                    while (!st.empty() && st.top() == p[i])
                    {
                        st.pop();
                        prevchar = '.';
                    }
                }
                else
                {
                    if (st.empty())
                        return false;
                    else
                    {
                        st.pop();
                    }
                }
                prevchar = '.';
            }
            else if (p[i] == '*')
            {
                prevchar = p[i];
            }
            else
            {
                if (prevchar == '*')
                {
                    while (i && (p[i - 1] == p[i]))
                        i--;
                    // if (i == 0)
                    // {
                    //     while (!st.empty() && st.top() == p[i])
                    //     {
                    //         st.pop();
                    //     }
                    // }
                    // else
                    // {
                    while (!st.empty() && st.top() == p[i])
                        st.pop();
                    // }
                }
                else
                {
                    if (st.empty())
                        return false;
                    else
                    {
                        st.pop();
                    }
                }
                prevchar = '.';
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.isMatch("aab", "c*a*b");
    return 0;
}