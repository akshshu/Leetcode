
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string simplifyPath(string path)
    {
        int dotCount = 0;
        stack<char> st;
        st.push('/');
        for (int i = 1; i < path.size(); i++)
        {
            char x = path[i];
            if (x == '/')
            {
                if (st.top() == '/')
                    continue;

                if (dotCount == 2)
                {
                    st.pop();
                    st.pop();
                    st.pop();
                    if (!st.empty())
                    {
                        while (st.top() != '/')
                        {
                            st.pop();
                        }
                        st.pop();
                    }
                    dotCount = 0;
                }
                else if (dotCount == 1)
                {
                    st.pop();
                    st.pop();
                    dotCount = 0;
                }
            }
            else if (x == '.' and (st.top() == '/' or dotCount > 0))
                dotCount++;
            else
                dotCount = 0;
            st.push(x);
        }
        if (dotCount == 2)
        {
            st.pop();
            st.pop();
            st.pop();
            if (!st.empty())
            {
                while (st.top() != '/')
                {
                    st.pop();
                }
                st.pop();
            }
            dotCount = 0;
        }
        else if (dotCount == 1)
        {
            st.pop();
            st.pop();
            dotCount = 0;
        }
        while (!st.empty() and st.top() == '/')
            st.pop();
        string ans = "";
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        if (ans.size() == 0)
            return "/";
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.simplifyPath("/home//foo/");
    cout << ans;
    return 0;
}
