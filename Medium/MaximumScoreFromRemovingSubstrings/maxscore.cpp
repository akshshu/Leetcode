
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumGain(string s, int x, int y)
    {
        stack<char> st;
        string s1 = "ab", s2 = "ba";
        int points = 0;
        if (x < y)
        {
            swap(s1, s2);
            swap(x, y);
        }
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (!st.empty() and st.top() == s1[0] and s[i] == s1[1])
            {
                points += x;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        int seconcharCount = 0;
        while (!st.empty())
        {
            if (st.top() == s2[1])
                seconcharCount++;
            else if (st.top() == s2[0])
            {
                if (seconcharCount-- > 0)
                    points += y;
            }
            else
                seconcharCount = 0;
            st.pop();
        }
        return points;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
