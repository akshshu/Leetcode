
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int distinctSubseqII(string s)
    {
        int n = s.size();
        int pre = 1;
        int curr = 1;
        vector<int> lastCount(26, 0);
        for (int i = 0; i < n; i++)
        {
            int charIn = s[i] - 'a';
            curr = (pre * 2) % 1000000007;
            curr -= lastCount[charIn];
            curr = (curr >= 0) ? curr % 1000000007 : curr + 1000000007;
            lastCount[charIn] = pre;
            pre = curr;
        }
        --curr;
        return curr;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
