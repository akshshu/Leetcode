
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string ans;
        int n = num.size();
        ans.push_back(num[0]);
        int numelem = 1;
        int numNeeded = num.size() - k;
        if (numNeeded == 0)
            return "0";

        for (int i = 1; i < n; i++)
        {
            if (k == 0)
            {
                ans.push_back(num[i]);
                continue;
            }
            if (num[i] < ans.back())
            {
                while (k and numelem and numelem - 1 + n - i >= numNeeded and ans.back() > num[i])
                {
                    ans.pop_back();
                    numelem--;
                    k--;
                }
                ans.push_back(num[i]);
                numelem++;
            }
            else
            {
                if (numelem < numNeeded)
                {
                    ans.push_back(num[i]);
                    numelem++;
                }
            }
        }
        int i = 0;
        while (i < ans.size() and ans[i] == '0')
            i++;
        ans = ans.substr(i, ans.size() - i);
        if (ans.size() == 0)
            return "0";

        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
