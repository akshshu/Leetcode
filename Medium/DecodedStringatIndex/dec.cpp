
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string decodeAtIndex(string s, int k)
    {
        long long totalLength = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '2' and s[i] <= '9')
                totalLength *= ((int)s[i] - 48);
            else
                totalLength += 1;
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            k = k % totalLength;
            if (k == 0 and !(s[i] >= '2' and s[i] <= '9'))
                return (string) "" + s[i];
            if (s[i] >= '2' and s[i] <= '9')
                totalLength /= s[i] - '0';
            else
                totalLength--;
        }
        return "";
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
