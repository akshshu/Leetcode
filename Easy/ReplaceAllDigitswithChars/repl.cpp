
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string replaceDigits(string s)
    {
        for (int i = 1; i < s.size(); i += 2)
            s[i] = s[i - 1] + s[i] - 48;
        return s;
    }
};
int main()
{
    Solution s;
    string s1 = "a1c1e1";
    auto ans = s.replaceDigits(s1);
    cout << ans;
    return 0;
}
