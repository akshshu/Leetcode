
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string gcdOfStrings(string s1, string s2)
    {
        if (s1 + s2 == s2 + s1)
        {
            int t = __gcd(s1.length(), s2.length());
            return s1.substr(0, t);
        }
        return "";
    }
};
int main()
{
    Solution s;
    string str1 = "ABCABC", str2 = "ABC";
    auto ans = s.gcdOfStrings(str1, str2);
    cout << ans;
    return 0;
}
