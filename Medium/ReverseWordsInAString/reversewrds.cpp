
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";
        string p = "";
        bool k = false;
        for (auto x : s)
        {
            if (x == ' ')
            {
                if (k)
                {
                    reverse(p.begin(), p.end());
                    ans += p;
                    ans += ' ';
                    p = "";
                    k = false;
                }
            }
            else
            {
                p += x;
                k = true;
            }
        }
        reverse(p.begin(), p.end());

        ans += p;
        reverse(ans.begin(), ans.end());
        if (ans[0] == ' ')
            ans = ans.substr(1, ans.size() - 1);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.reverseWords("the sky is blue");
    return 0;
}
