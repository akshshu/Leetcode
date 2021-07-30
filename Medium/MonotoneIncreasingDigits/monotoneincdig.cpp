
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int monotoneIncreasingDigits(int n)
    {
        stack<int> st;
        int i = -1;
        int ans = 0;
        while (n)
        {
            int mod = n % 10;
            if (st.empty())
            {
                st.push(mod);
                i++;
            }
            else if (mod > st.top())
            {
                int temp = i;
                int prev = mod;
                while (!st.empty() and prev >= st.top())
                {
                    ans += (9 * pow(10, temp));
                    temp--;
                    st.pop();
                    prev = 9;
                }
                st.push(mod - 1);
                i++;
            }
            else
            {
                st.push(mod);
                i++;
            }
            n /= 10;
        }
        while (!st.empty())
        {
            ans += (st.top() * pow(10, i));
            i--;
            st.pop();
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
